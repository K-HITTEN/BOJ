#include<iostream>
#include<queue>
#include<vector>

using namespace std;

bool visited[10001];
vector<int> v;
vector<vector<int>> arr;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M, l, r, ret = 0;
    cin >> N >> M;
    arr.resize(N+1);
    while(M--){
        cin >> l >> r;
        arr[r].push_back(l);
    }
    for(int i = 1; i <= N; i++){
        fill(visited,visited+10001,false);
        queue<int> q;
        int cnt = 1;
        q.push(i);
        visited[i] = true;
        while(!q.empty()){
            int tmp = q.front();
            q.pop();
            for(int j = 0; j < arr[tmp].size(); j++){
                if(!visited[arr[tmp][j]]){
                    visited[arr[tmp][j]] = true;
                    cnt++;
                    q.push(arr[tmp][j]);
                }
            }
        }
        if(cnt>ret){
            ret = cnt;
            v.clear();
            v.push_back(i);
        }else if(cnt == ret)v.push_back(i);
    }
    for(int i = 0; i < v.size(); i++)cout << v[i] << " ";
}