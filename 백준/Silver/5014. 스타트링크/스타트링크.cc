#include<iostream>
#include<queue>

using namespace std;

int F,S,G,U,D;
bool visited[1000001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> F >> S >> G >> U >> D;
    visited[S] = true;
    queue<pair<int,int>> q;
    q.push({S,0});
    while(!q.empty()){
        pair<int,int> tmp = q.front();
        q.pop();
        if(tmp.first == G){
            cout << tmp.second;
            return 0;
        }
        if(tmp.first+U <= F && !visited[tmp.first+U]){
            visited[tmp.first+U] = true;
            q.push({tmp.first+U, tmp.second+1});
        }
        if(tmp.first-D > 0 && !visited[tmp.first-D]){
            visited[tmp.first-D] = true;
            q.push({tmp.first-D, tmp.second+1});
        }
    }
    cout << "use the stairs";
}