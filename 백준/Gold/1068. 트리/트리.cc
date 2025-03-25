#include<iostream>
#include<vector>

using namespace std;

int N, M, leaf = 0, root, tmp;
vector<int> tree[51];

int dfs(int node){
    if(node == M)return -1;
    if(tree[node].size() == 0){
        leaf++;
        return 0;
    }
    for(int i = 0; i < tree[node].size(); i++){
        if(dfs(tree[node][i]) == -1&& tree[node].size()== 1)leaf++;
    }
    return 0;
}

int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(tmp == -1)root = i;
        else tree[tmp].push_back(i);
    }
    cin >> M;
    dfs(root);
    cout << leaf;
}