#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n, m, a, b, ret;
vector<int> arr[501];
bool visited[501];
queue<int> q;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    q.push(1);
    visited[1] = true;
    for(int i = 0; i < arr[1].size(); i++){
        q.push(arr[1][i]);
        ret++;
        visited[arr[1][i]] = true;
    }
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(int i = 0; i < arr[tmp].size(); i++){
            if(visited[arr[tmp][i]])continue;
            visited[arr[tmp][i]] = true;
            ret++;
        }
    }
    cout << ret;
}