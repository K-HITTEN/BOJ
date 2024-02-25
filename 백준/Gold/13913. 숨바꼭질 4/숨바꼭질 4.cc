#include <iostream>
#include <queue>
#include <stack>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int visited[100001] = {0,};

int main(void){
    fastio;
    int N ,K;
    cin >> N >> K;
    queue<pair<int,int>> q;
    q.push({N,0});
    fill(visited, visited+100001, -1);
    visited[N] = N;
    if(N == K){
        cout << 0 << '\n' << N;
        return 0;
    }
    while(!q.empty()){
        int x = q.front().first, t = q.front().second;
        q.pop();
        if(x == K){
            cout << t <<'\n';
            int tmp = x;
            stack <int> s;
            s.push(tmp);
            while(tmp != N){
                s.push(visited[tmp]);
                tmp = visited[tmp];
            }
            while(!s.empty()){
                cout << s.top() << " ";
                s.pop();
            }
            return 0;
        }
        if(x!=100000&& visited[x+1] == -1){
            q.push({x+1,t+1});
            visited[x+1] = x;
        }
        if(2*x<=100000&& visited[2*x] == -1){
            q.push({2*x,t+1});
            visited[2*x] = x;
        }
        if(x != 0 && visited[x-1] == -1){
            q.push({x-1,t+1});
            visited[x-1] = x;
        }
    }
}