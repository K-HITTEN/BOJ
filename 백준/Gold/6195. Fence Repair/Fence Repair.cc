#include<iostream>
#include<queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    long long tmp1, tmp2, ret = 0;
    cin >> N;
    priority_queue<long long,vector<long long>, greater<long long>> pq;
    for(int i = 0; i < N; i++){
        cin >> tmp1;
        pq.push(tmp1);
    }
    while(pq.size()>1){
        tmp1 = pq.top();
        pq.pop();
        tmp2 = pq.top();
        pq.pop();
        ret += (tmp1+tmp2);
        pq.push(tmp1+tmp2);
    }
    cout << ret << "\n";
}