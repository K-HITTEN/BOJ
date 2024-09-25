#include<iostream>
#include<vector>
#include<queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v[10001];

int main(void){
    fastio;
    int N, d, p, day = 0, ret = 0;
    cin >> N;
    priority_queue<int,vector<int>> pq;
    while(N--){
        cin >> p >> d;
        day = max(day, d);
        v[d].push_back(p);
    }
    for(int i = day; day > 0; day--){
        for(int j = 0; j < v[day].size(); j++)pq.push(v[day][j]);
        if(!pq.empty()){
            ret += pq.top();
            pq.pop();
        }
    }
    cout << ret;
}