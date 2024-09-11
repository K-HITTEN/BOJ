#include<iostream>
#include<vector>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
  int t,fin;  
};

struct cmp{
    bool operator()(info &a, info &b){
        return a.fin > b.fin;
    }
};

int main(void){
    fastio;
    int N, tmp1, tmp2;
    vector<info> v;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp1 >> tmp2;
        v.push_back({tmp1,tmp2});
    }
    sort(v.begin(),v.end(),cmp());
    int ret = v[0].fin;
    for(int i = 0; i < N; i++){
        ret = min(ret,v[i].fin);
        ret -= v[i].t;
    }
    if(ret < 0) cout << -1;
    else cout << ret;
}