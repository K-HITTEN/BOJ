#include <iostream>
#include <vector>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    string name;
    int cost;
};

struct cmp{
    bool operator() (info &a, info &b){
        return a.cost < b.cost;
    }
};

int main(void){
    fastio;
    int n, d, k, sum = 0;
    cin >> n >> d >> k;
    priority_queue<info,vector<info>,cmp> pq;
    for(int i = 0; i < n; i++){
        info tmp;
        cin >> tmp.name >> tmp.cost;
        pq.push(tmp);
    }
    queue<info> q;
    for(int i = 0; i < k; i++){
        info tmp = pq.top();
        pq.pop();
        q.push(tmp);
        sum+=tmp.cost;
        if(sum>=d)break;
    }
    if(sum<d)cout << "impossible";
    else {
        cout << q.size() << "\n";
        while(!q.empty()){
            info tmp = q.front();
            q.pop();
            cout << tmp.name <<", YOU ARE FIRED!\n";
        }
    }
}