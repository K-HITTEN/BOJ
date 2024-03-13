#include <iostream>
#include <vector>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> outdegree[501];
int arr[501] = {0,}, indegree[501] = {0,}, result[501] = {0,};

int main(void){
    fastio;
    int N,tmp;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
        while(true){
            cin >> tmp;
            if(tmp == -1)break;
            indegree[i]++;
            outdegree[tmp].push_back(i);
        }
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    for(int i = 1; i<= N; i++){
        if(indegree[i] == 0)q.push({arr[i],i});
    }
    while(!q.empty()){
        pair<int,int> tmp = q.top();
        q.pop();
        result[tmp.second] = tmp.first;
        for(int i = 0; i < outdegree[tmp.second].size(); i++){
            indegree[outdegree[tmp.second][i]]--;
            if(indegree[outdegree[tmp.second][i]] == 0){
                q.push({tmp.first+arr[outdegree[tmp.second][i]],outdegree[tmp.second][i]});
            }
        }
    }
    for(int i = 1; i <= N; i++)cout << result[i] << "\n";
}