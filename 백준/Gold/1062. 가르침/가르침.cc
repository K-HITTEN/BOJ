#include<iostream>
#include<vector>

using namespace std;

vector<string> v;
int N, K, ret = 0;
bool visited[26];

void backtracking(int idx, int tgt){
    if(idx == K){
        int cnt = 0;
        for(int i = 0; i < v.size(); i++){
            bool FLAG = false;
            for(int j = 0; j < v[i].length(); j++){
                if(!visited[v[i][j]-'a']){
                    FLAG = true;
                    break;
                }
            }
            if(!FLAG)cnt++;
        }
        ret = max(ret, cnt);
        return;
    }
    if(tgt == 26)return;
    while(visited[tgt])tgt++;
    visited[tgt]=true;
    backtracking(idx+1,tgt+1);
    visited[tgt]=false;
    backtracking(idx,tgt+1);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> K;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    if (K<5){
        cout << 0;
        return 0;
    }
    visited['a'-'a'] = visited['n'-'a'] = visited['t'-'a'] = visited['i'-'a'] = visited['c'-'a'] = true;
    backtracking(5,0);
    cout << ret;
}