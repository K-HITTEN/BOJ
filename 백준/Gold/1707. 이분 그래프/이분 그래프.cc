#include<iostream>
#include<vector>

using namespace std;

int K, V, E, u, v;
vector<vector<int>> list;
int colors[20001];
bool FLAG;

void dfs(int vertex, int color){
    colors[vertex] = color;
    for(int i = 0; i < list[vertex].size(); i++){
        if(colors[list[vertex][i]]==color){
            FLAG = true;
            return;
        }
        if(colors[list[vertex][i]]==0){
            dfs(list[vertex][i],color*-1);
        }
    }
}


int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> K;
    while(K--){
        cin >> V >> E;
        FLAG = false;
        list.clear();
        list.resize(V+1);
        fill(colors,colors+20001,0);
        for(int i = 0; i < E; i++){
            cin >> u >> v;
            list[u].push_back(v);
            list[v].push_back(u);
        }
        for(int i = 1; i <= V; i++){
            if(FLAG)break;
            if(colors[i]==0){
                dfs(i, 1);
            }
        }
        if(FLAG)cout << "NO\n";
        else cout << "YES\n";
    }
}