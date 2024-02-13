#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N,M,arr[7],tgt[7];

void perm(int tgtIdx){
    if(tgtIdx == M){
        for(int i = 0; i < M; i++){
            cout << tgt[i] <<" ";
        }
        cout <<"\n";
        return;
    }
    for(int i = 0; i<N; i++){
        tgt[tgtIdx] = arr[i];
        perm(tgtIdx+1);
    }
}

int main(void){
    fastio;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        arr[i] = i+1;
    }
    perm(0);
}