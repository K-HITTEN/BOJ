#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool visited[100001];
int maxT = 0, maxV;
vector <pair<int,int>> d[100001];

void dfs(int idx, int count){
    for(int i = 0; i <d[idx].size(); i++){
        if(!visited[d[idx][i].first]){
            visited[d[idx][i].first] = true;
            if(maxT < count+d[idx][i].second){
                maxV = d[idx][i].first;
                maxT = count+d[idx][i].second;
            }
            dfs(d[idx][i].first,count+d[idx][i].second);
            visited[d[idx][i].first]  = false;
        }
    }
}

int main(void){
    fastio;
    int V, tmp, tmp2, tmp3;
    cin >> V;
    for(int i = 0; i < V; i++){
        cin >> tmp;
        while(true){
            cin >> tmp2;
            if(tmp2 == -1) break;
            cin >> tmp3;
            d[tmp].push_back({tmp2,tmp3});
        }
    }
    visited[1] = true;
    dfs(1, 0);
    visited[1] = false;
    maxT = 0;
    visited[maxV] = true;
    dfs(maxV, 0);
    cout << maxT;
}