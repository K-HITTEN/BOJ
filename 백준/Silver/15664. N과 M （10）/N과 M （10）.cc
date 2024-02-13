#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N,M,tgt[8],selects[8];
vector<int>arr;
vector<vector<int>> result;

void perm(int tgtIdx){
    if(tgtIdx == M){
        vector<int> tmp;
        for(int i = 0; i < M; i++){
            tmp.push_back(tgt[i]);
        }
        result.push_back(tmp);
        return;
    }
    for(int i = 0; i<arr.size(); i++){
        if(selects[i])continue;
        if(tgtIdx!=0 && arr[i]<tgt[tgtIdx-1])continue;
        tgt[tgtIdx] = arr[i];
        selects[i] = true;
        perm(tgtIdx+1);
        selects[i] = false;
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
    perm(0);
    sort(result.begin(),result.end());
    result.erase(unique(result.begin(),result.end()),result.end());
    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j <result[i].size(); j++){
            cout << result[i][j] <<" ";
        }
        cout <<"\n";
    }
}