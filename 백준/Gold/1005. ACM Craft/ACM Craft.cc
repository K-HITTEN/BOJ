#include <iostream>
#include <queue>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int timeArr[1001] = {0,}, beforeOrder[1001] = {0,};

int main(void){
    fastio;
    int T, N, K, tmp1, tmp2, W, times;
    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> N >> K;
        times = 0;
        fill(timeArr,timeArr+1001,0);
        fill(beforeOrder,beforeOrder+1001,0);
        vector<int> afterOrder[N+1];
        for(int i = 1; i <=N; i++)cin >> timeArr[i];
        
        for(int i = 0; i < K; i++){
            cin >> tmp1 >> tmp2;
            beforeOrder[tmp2]++;
            afterOrder[tmp1].push_back(tmp2);
        }
        cin >> W;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i = 1; i <= N; i++) if(beforeOrder[i] == 0) pq.push({timeArr[i],i});
        while(!pq.empty()){
            times = pq.top().first;
            int idx = pq.top().second;
            pq.pop();
            if(W == idx){
                cout << times <<'\n';
            }
            for(int i = 0; i < afterOrder[idx].size(); i++){
                beforeOrder[afterOrder[idx][i]]--;
                if(beforeOrder[afterOrder[idx][i]] ==0)pq.push({times+timeArr[afterOrder[idx][i]],afterOrder[idx][i]});
            }
        }
    }
    
}