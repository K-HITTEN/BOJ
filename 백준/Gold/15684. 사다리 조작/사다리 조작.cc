#include<iostream>
#include<vector>

using namespace std;

int N, M, H, ret = 4, t1, t2;
vector<pair<int,int>> v;
pair<int,int> tgt[3];
bool visited[32][12];

bool check(){
    for(int i = 1; i <= N; i++){
        int idx = i;
        for(int j = 1; j <= H; j++){
            if(visited[j][idx])idx++;
            else if(visited[j][idx-1])idx--;
        }
        if(idx!=i)return false;
    }
    return true;
}

void calc(int srcIdx, int tgtIdx){
    if(tgtIdx-1==ret)return;
    if(tgtIdx==3||srcIdx==v.size()){
        for(int i = 0; i < tgtIdx; i++)visited[tgt[i].first][tgt[i].second] = true;
        if(check())ret = min(ret, tgtIdx);
        for(int i = 0; i < tgtIdx; i++)visited[tgt[i].first][tgt[i].second] = false;
        return;
    }
    if(!(visited[v[srcIdx].first][v[srcIdx].second-1]||visited[v[srcIdx].first][v[srcIdx].second+1])){
        tgt[tgtIdx] = v[srcIdx];
        calc(srcIdx+1,tgtIdx+1);
    }
    calc(srcIdx+1,tgtIdx);
}

int main(){
    cin >> N >> M >> H;
    for(int i = 0; i < M; i++){
        cin >> t1 >> t2;
        visited[t1][t2] = true;
    }
    for(int i = 1; i <= H; i++){
        for(int j = 1; j < N; j++){
            if(!visited[i][j])v.push_back({i,j});
        }
    }
    calc(0,0);
    if(ret>3)cout << -1;
    else cout << ret;
}