#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool visited[101];
vector<vector<int>> v;
int N, M, x, y, _x, _y;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    v.resize(N+1);
    cin >> x >> y;
    visited[x] = true;
    queue<pair<int,int>> q;
    q.push({x,0});
    cin >> M;
    while(M--){
        cin >> _x >> _y;
        v[_x].push_back(_y);
        v[_y].push_back(_x);
    }
    while(!q.empty()){
        pair<int,int> tmp = q.front();
        q.pop();
        if(tmp.first == y){
            cout << tmp.second;
            return 0;
        }
        for(int i = 0; i < v[tmp.first].size(); i++){
            if(!visited[v[tmp.first][i]]){
                visited[v[tmp.first][i]] = true;
                q.push({v[tmp.first][i],tmp.second+1});
            }
        }
    }
    cout << -1;
}