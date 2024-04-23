#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    int idx, width, height, weight;
};

struct cmp{
    bool operator()(info& a, info& b){
        return a.width>b.width;
    }
};

pair<int,int> dp[100];
vector<info> v;

int main(void){
    fastio;
    int N;
    cin >> N;
    if(N == 0)return 0;
    v.resize(N);
    for(int i = 0; i < N; i++){
        v[i].idx = i+1;
        cin >> v[i].width >> v[i].height >> v[i].weight;
    }
    int maxheight = -1, maxtop = 0;
    sort(v.begin(),v.end(),cmp());
    for(int i = 0; i < N; i++){
        dp[i] = {v[i].height,-1};
        for(int j = 0; j < i; j++){
            if(v[i].weight<v[j].weight){
                if(dp[i].first<dp[j].first+v[i].height){
                    dp[i] = {dp[j].first+v[i].height, j};
                }
            }
        }
        if(dp[i].first > maxheight){
            maxheight = dp[i].first;
            maxtop = i;
        }
    }
    queue<int> q;
    while(maxtop != -1){
        q.push(v[maxtop].idx);
        maxtop = dp[maxtop].second;
    }
    cout << q.size() <<"\n";
    while(!q.empty()){
        cout << q.front() << "\n";
        q.pop();
    }
}