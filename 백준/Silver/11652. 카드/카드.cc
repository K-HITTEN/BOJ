#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    long long num, n;
};

struct cmp{
    bool operator() (info &a, info &b){
        if(a.n == b.n)return a.num<b.num;
        return a.n>b.n;
    }
};

int main(void){
    fastio;
    long long N, tmp, idx = 0;
    vector<info> v;
    map<long long,long long> m;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(m.find(tmp) == m.end()){
            m.insert({tmp,idx});
            v.push_back({tmp,1});
            idx++;
        }else v[m[tmp]].n++;
    }
    sort(v.begin(),v.end(),cmp());
    cout << v[0].num;
}