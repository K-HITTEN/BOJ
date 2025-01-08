#include<iostream>
#include<vector>
#include<set>

using namespace std;

vector<set<int>> v;
bool visited[4001][4001];
int ret = -1, N, M, t1, t2, tgt[3];

void calc(int srcIdx, int tgtIdx){
    if(tgtIdx==3){
        if(!visited[tgt[0]][tgt[2]])return;
        int cnt = v[tgt[0]].size() + v[tgt[1]].size() + v[tgt[2]].size()-6;
        if(ret==-1)ret=cnt;
        else ret = min(ret,cnt);
        return;
    }
    if(srcIdx>N)return;
    tgt[tgtIdx]=srcIdx;
    if(tgtIdx==0||(tgtIdx!=0&&visited[tgt[tgtIdx-1]][srcIdx]))calc(srcIdx+1,tgtIdx+1);
    calc(srcIdx+1,tgtIdx);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    v.resize(N+1);
    while(M--){
        cin >> t1 >> t2;
        v[t1].insert(t2);
        v[t2].insert(t1);
        visited[t1][t2] = true;
        visited[t2][t1] = true;
    }
    calc(1,0);
    cout << ret;
}