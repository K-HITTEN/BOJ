#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N;

struct info{
  string name;
  int d,m,y;
};

struct cmp{
    bool operator()(info &a, info &b){
        if(a.y == b.y){
            if(a.m == b.m)return a.d<b.d;
            return a.m<b.m;
        }
        return a.y<b.y;
    }
};

int main(void){
    fastio;
    cin >> N;
    string s;
    int d,m,y;
    vector<info> v;
    for(int i = 0; i < N; i++){
        cin >> s >> d >> m >> y;
        v.push_back({s,d,m,y});
    }
    sort(v.begin(),v.end(),cmp());
    cout << v[N-1].name << "\n" << v[0].name;
}