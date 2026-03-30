#include<iostream>
#include<queue>
#define ll long long

using namespace std;

struct info{
    ll n, idx;
};

struct cmp{
    bool operator()(info &a, info &b){
        if(a.n==b.n)return a.idx < b.idx;
        else return a.n > b.n;
    }
};

priority_queue<info,vector<info>,cmp> pq;
int N, cnt, ret;
ll tmp;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
       cin >> tmp;
       pq.push({tmp,0});
       cin >> tmp;
       pq.push({tmp,1});
    }
    while(!pq.empty()){
        info temp = pq.top();
        pq.pop();
        if(temp.idx)cnt--;
        else cnt++;
        ret = max(ret,cnt);
    }
    cout << ret;
}