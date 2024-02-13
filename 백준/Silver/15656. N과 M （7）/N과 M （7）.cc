#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N,M,tgt[7];
vector<int>arr;

void perm(int tgtIdx){
    if(tgtIdx == M){
        for(int i = 0; i < M; i++){
            cout << tgt[i] <<" ";
        }
        cout <<"\n";
        return;
    }
    for(int i = 0; i<arr.size(); i++){
        tgt[tgtIdx] = arr[i];
        perm(tgtIdx+1);
    }
}

int main(void){
    fastio;
    int tmp;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >>tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    perm(0);
}