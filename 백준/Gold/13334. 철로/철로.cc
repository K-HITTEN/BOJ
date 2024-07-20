#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info {
    int start,finish;
};

struct cmp{
    bool operator()(info &a, info &b){
        if(a.finish == b.finish)return a.start<b.start;
        return a.finish<b.finish;
    }
};

vector<info> v;
int n, h, o, d, ret = 0;

int main(void){
    fastio;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> h >> o;
        if(h<o)v.push_back({h,o});
        else v.push_back({o,h});
    }
    cin >> d;
    sort(v.begin(),v.end(),cmp());
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i = 0; i < n; i++){
        if(v[i].finish-v[i].start>d)continue;
        pq.push(v[i].start);
        while(!pq.empty()){
            if(pq.top()+d<v[i].finish)pq.pop();
            else break;
        }
        ret = max(ret,(int)pq.size());
    }
    cout << ret;
}