#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct info{
    int a,b;
};

struct cmp{
    bool operator()(info &a, info &b){
        if(a.a == b.a)return a.b < b.b;
        else return a.a < b.a;
    }
};

int ret, x, y, N, idx;
vector<info> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmp());
    for(int i = 0; i < v.size(); i++){
        if(i == 0){
            ret += (v[i].b-v[i].a);
            idx = v[i].b;
        }else if(idx>=v[i].b)continue;
        else{
            ret += (v[i].b-max(idx,v[i].a));
            idx = v[i].b;
        }
    }
    cout << ret;
}