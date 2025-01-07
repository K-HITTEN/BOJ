#include<iostream>

using namespace std;

int tgt[3], N, M, t1, t2, cnt = 0;
bool visited[201][201];

void comb(int srcIdx, int tgtIdx){
    if(tgtIdx==3){
        if(!visited[tgt[0]][tgt[1]]&&!visited[tgt[0]][tgt[2]]&&!visited[tgt[1]][tgt[2]])cnt++;
        return;
    }
    if(srcIdx>N)return;
    tgt[tgtIdx] = srcIdx;
    comb(srcIdx+1,tgtIdx+1);
    comb(srcIdx+1,tgtIdx);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> t1 >> t2;
        visited[t1][t2] = true;
        visited[t2][t1] = true;
    }
    comb(1,0);
    cout<<cnt;
}