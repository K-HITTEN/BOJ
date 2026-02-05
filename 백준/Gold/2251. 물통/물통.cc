#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

struct info{
    int a, b, c;
};

int A, B, C, t;
bool visited[201][201];
vector<int> v;
queue<info> q;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> A >> B >> C;
    q.push({0,0,C});
    visited[0][C] = true;
    while(!q.empty()){
        info tmp = q.front();
        q.pop();
        if(tmp.a==0)v.push_back(tmp.c);
        if(tmp.a!=0&&tmp.b!=B){
            t = min(B-tmp.b,tmp.a);
            tmp.a -= t;
            tmp.b += t;
            if(!visited[tmp.a][tmp.c]){
                visited[tmp.a][tmp.c] = true;
                q.push({tmp.a,tmp.b,tmp.c});
            }
            tmp.a += t;
            tmp.b -= t;
        }
        if(tmp.a!=0&&tmp.c!=C){
            t = min(C-tmp.c,tmp.a);
            tmp.a -= t;
            tmp.c += t;
            if(!visited[tmp.a][tmp.c]){
                visited[tmp.a][tmp.c] = true;
                q.push({tmp.a,tmp.b,tmp.c});
            }
            tmp.a += t;
            tmp.c -= t;
        }
        if(tmp.b!=0&&tmp.a!=A){
            t = min(A-tmp.a,tmp.b);
            tmp.b -= t;
            tmp.a += t;
            if(!visited[tmp.a][tmp.c]){
                visited[tmp.a][tmp.c] = true;
                q.push({tmp.a,tmp.b,tmp.c});
            }
            tmp.b += t;
            tmp.a -= t;
        }
        if(tmp.b!=0&&tmp.c!=C){
            t = min(C-tmp.c,tmp.b);
            tmp.b -= t;
            tmp.c += t;
            if(!visited[tmp.a][tmp.c]){
                visited[tmp.a][tmp.c] = true;
                q.push({tmp.a,tmp.b,tmp.c});
            }
            tmp.b += t;
            tmp.c -= t;
        }
        if(tmp.c!=0&&tmp.a!=A){
            t = min(A-tmp.a,tmp.c);
            tmp.c -= t;
            tmp.a += t;
            if(!visited[tmp.a][tmp.c]){
                visited[tmp.a][tmp.c] = true;
                q.push({tmp.a,tmp.b,tmp.c});
            }
            tmp.c += t;
            tmp.a -= t;
        }
        if(tmp.c!=0&&tmp.b!=B){
            t = min(B-tmp.b,tmp.c);
            tmp.c -= t;
            tmp.b += t;
            if(!visited[tmp.a][tmp.c]){
                visited[tmp.a][tmp.c] = true;
                q.push({tmp.a,tmp.b,tmp.c});
            }
            tmp.c += t;
            tmp.b -= t;
        }
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++)cout << v[i] << ' ';
}