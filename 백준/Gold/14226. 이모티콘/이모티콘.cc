#include<iostream>
#include<queue>

using namespace std;

struct info{
    int e,c,t;
};

int S;
bool visited[2000][2000];
queue<info> q;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> S;
    q.push({1,0,0});
    visited[1][0] = true;
    while(!q.empty()){
        info tmp = q.front();
        q.pop();
        if(tmp.e == S){
            cout << tmp.t;
            return 0;
        }
        if(tmp.e!=tmp.c)q.push({tmp.e,tmp.e,tmp.t+1});
        if(tmp.e+tmp.c<2000&&!visited[tmp.e+tmp.c][tmp.c]){
            visited[tmp.e+tmp.c][tmp.c] = true;
            q.push({tmp.e+tmp.c,tmp.c,tmp.t+1});
        }
        if(tmp.e!=1&&!visited[tmp.e-1][tmp.c]){
            visited[tmp.e-1][tmp.c] = true;
            q.push({tmp.e-1,tmp.c,tmp.t+1});
        }
    }
}