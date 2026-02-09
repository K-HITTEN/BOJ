#include<iostream>
#include<queue>

using namespace std;

struct info{
    int s,e,c;
};

struct cmp{
    bool operator()(info &a, info &b){
        if(a.e==b.e)return a.c>b.c;
        else return a.e > b.e;
    }
};

int N, D, s, e, c;
int dp[10001];
priority_queue<info,vector<info>,cmp> pq;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> D;
    while(N--){
        cin >> s >> e >> c;
        pq.push({s,e,c});
    }
    for(int i = 1; i <= D; i++){
        dp[i] = dp[i-1]+1;
        while(!pq.empty()&&pq.top().e==i){
            dp[i] = min(dp[i],dp[pq.top().s]+pq.top().c);
            pq.pop();
        }
    }
    cout << dp[D];
}