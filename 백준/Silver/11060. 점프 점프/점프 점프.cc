#include <iostream>
#include <vector>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v;
bool visited[1001];

int main(void){
    fastio;
    int n;
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)cin >> v[i];
    queue<pair<int,int>> q;
    q.push({0,0});
    visited[0] = true;
    while(!q.empty()){
        pair<int,int> tmp = q.front();
        if(tmp.second == n-1){
            cout << tmp.first;
            return 0;
        }
        q.pop();
        for(int i = 1; i <= v[tmp.second]; i++){
            if(tmp.second+i>=n||visited[tmp.second+i])continue;
            visited[tmp.second+i] = true;
            q.push({tmp.first+1,tmp.second+i});
        }
    }
    cout << -1;
}