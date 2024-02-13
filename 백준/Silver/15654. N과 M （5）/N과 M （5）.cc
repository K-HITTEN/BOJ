#include <iostream>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N,M,arr[8],tgt[8];
bool selects[8];

void perm(int tgtIdx){
    if(tgtIdx == M){
        for(int i = 0; i < M; i++){
            cout << tgt[i] <<" ";
        }
        cout <<"\n";
        return;
    }
    for(int i = 0; i<N; i++){
        if(selects[i]) continue;
        tgt[tgtIdx] = arr[i];
        selects[i] = true;
        perm(tgtIdx+1);
        selects[i] = false;
    }
}

int main(void){
    fastio;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(arr,arr+N);
    perm(0);
}