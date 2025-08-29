#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

vector<vector<int>> v;
vector<int> ret;
int N, M, K, X, sta, fin;
bool visited[300001];
queue<pair<int,int>> q;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M >> K >> X;
    v.resize(N+1);
    while(M--){
        cin >> sta >> fin;
        v[sta].push_back(fin);
    }
    visited[X] = true;
    q.push({0,X});
    while(!q.empty()){
        pair<int,int> tmp = q.front();
        q.pop();
        if(tmp.first == K)ret.push_back(tmp.second);
        else {
            for(int i = 0; i < v[tmp.second].size(); i++){
                if(visited[v[tmp.second][i]])continue;
                visited[v[tmp.second][i]] = true;
                q.push({tmp.first+1,v[tmp.second][i]});
            }
        }
    }
    if(!ret.size())cout << -1;
    else {
        sort(ret.begin(),ret.end());
        for(int i = 0; i < ret.size(); i++)cout << ret[i] << "\n";
    }
}