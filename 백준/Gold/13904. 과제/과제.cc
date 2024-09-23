#include<iostream>
#include<vector>
#include<queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, d, w, day = 0, ret = 0;
    vector<int> v[1001];
    cin >> N;
    priority_queue<int,vector<int>,less<int>> pq;
    for(int i = 0; i < N; i++){
        cin >> d >> w;
        day = max(day,d);
        v[d].push_back(w);
    }
    while(day != 0){
        for(int i = 0; i < v[day].size(); i++)pq.push(v[day][i]);
        if(!pq.empty()){
            ret += pq.top();
            pq.pop();
        }
        day--;
    }
    cout << ret;
}