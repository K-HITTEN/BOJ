#include<iostream>
#include<vector>

using namespace std;

int N, arr[101];
bool visited[101];
vector<int> ret;

bool dfs(int idx, int n){
    if(idx == n)return true;
    else if(!visited[idx]){
        visited[idx] = true;
        return dfs(arr[idx], n);
    }else return false;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 1; i <= N; i++)cin >> arr[i];
    for(int i = 1; i <= N; i++){
        fill(visited,visited+101,false);
        if(dfs(arr[i],i))ret.push_back(i);
    }
    cout << ret.size() << '\n';
    for(int i = 0; i < ret.size(); i++)cout << ret[i] << '\n';
}