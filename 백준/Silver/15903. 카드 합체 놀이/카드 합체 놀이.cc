#include<iostream>
#include<queue>
#define ll long long

using namespace std;

int n, m;
ll tmp, ret; 
priority_queue<ll, vector<ll> ,greater<ll>> pq;


int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> n >> m;
    while(n--){
        cin >> tmp;
        pq.push(tmp);
    }
    while(m--){
        tmp = pq.top();
        pq.pop();
        tmp += pq.top();
        pq.pop();
        pq.push(tmp);
        pq.push(tmp);
    }
    while(!pq.empty()){
        ret += pq.top();
        pq.pop();
    }
    cout << ret;
}