#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int indegree[32001];
vector<int> outdegree[32001];

int main(void){
    fastio;
    int N, M, tmp1, tmp2;
    cin >> N >> M;
    
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2;
        indegree[tmp2]++;
        outdegree[tmp1].push_back(tmp2);
    }
    
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i = 1; i <= N; i++){
        if(indegree[i] == 0){
            pq.push(i);
        }
    }
    while(!pq.empty()){
        int tmp = pq.top();
        pq.pop();
        cout << tmp << " ";
        for(int i = 0; i < outdegree[tmp].size(); i++){
            indegree[outdegree[tmp][i]]--;
            if(indegree[outdegree[tmp][i]] == 0){
                pq.push(outdegree[tmp][i]);
            }
        }
    }
    
}