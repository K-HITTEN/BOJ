#include<iostream>
#include<queue>

using namespace std;

struct info{
    int idx, num;
};

struct cmp{
    bool operator()(info &a, info &b){
        if(a.num==b.num)return a.idx>b.idx;
        else return a.num > b.num;
    }
};

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, L, tmp;
    cin >> N >> L;
    priority_queue<info, vector<info>, cmp> pq;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        pq.push({i,tmp});
        while(pq.top().idx<i-L+1)pq.pop();
        cout << pq.top().num << " ";
    }
}