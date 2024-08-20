#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, a, b;
    vector<pair<int,int>> v;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(v[0].second);
    for(int i = 1; i < N; i++){
        if(pq.top()<=v[i].first){
            pq.pop();
        }
        pq.push(v[i].second);
    }
    cout << pq.size();
}