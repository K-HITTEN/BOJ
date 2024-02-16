#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool visited[100001];

int main(void){
    fastio;
    int N ,K;
    cin >> N >> K;
    queue<pair<int,int>> q;
    q.push({N,0});
    fill(visited, visited+100001, false);
    visited[N] = true;
    if(N == K){
        cout << 0;
        return 0;
    }
    while(!q.empty()){
        int x = q.front().first, t = q.front().second;
        q.pop();
        if(x+1 == K || 2*x == K || x-1 == K){
            cout << t+1;
            return 0;
        }
        if(x!=100000&&!visited[x+1]){
            q.push({x+1,t+1});
            visited[x+1] = true;
        }
        if(2*x<=100000&&!visited[2*x]){
            q.push({2*x,t+1});
            visited[2*x] = true;
        }
        if(x != 0 &&!visited[x-1]){
            q.push({x-1,t+1});
            visited[x-1] = true;
        }
    }
}