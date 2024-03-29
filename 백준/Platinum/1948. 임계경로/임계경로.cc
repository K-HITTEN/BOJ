#include<iostream>
#include<vector>
#include<queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<pair<int,int>> outdegree[10001], backdegree[10001];
int indegree[10001] = {0,}, result[10001] = {0,};
bool visited[10001] = {false,};

int main(void){
    fastio;
    int N, M, tmp1, tmp2, tmp3, start, finish;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        indegree[tmp2]++;
        outdegree[tmp1].push_back({tmp2,tmp3});
        backdegree[tmp2].push_back({tmp1,tmp3});
    }
    cin >> start >> finish;
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(int i = 0; i < outdegree[tmp].size(); i++){
            if(outdegree[tmp][i].second+result[tmp]>result[outdegree[tmp][i].first])result[outdegree[tmp][i].first] = outdegree[tmp][i].second+result[tmp];
            indegree[outdegree[tmp][i].first]--;
            if(indegree[outdegree[tmp][i].first] == 0){
                q.push(outdegree[tmp][i].first);
            }
        }
    }
    int count = 0;
    q.push(finish);
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(int i = 0; i < backdegree[tmp].size(); i++){
            if(result[tmp]- result[backdegree[tmp][i].first] == backdegree[tmp][i].second){
                count++;
                if(!visited[backdegree[tmp][i].first]){
                    visited[backdegree[tmp][i].first] = true;
                    q.push(backdegree[tmp][i].first);
                }
                
            }
        }
    }
    cout << result[finish] << "\n" << count;
}