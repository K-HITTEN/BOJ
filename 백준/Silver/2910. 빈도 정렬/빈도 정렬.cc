#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    int idx, num, cnt;
};

struct cmp{
    bool operator()(info &a, info &b){
        if(a.cnt == b.cnt)return a.idx < b.idx;
        else return a.cnt>b.cnt;
    }
};


int main(void){
    fastio;
    int N, C, tmp, idx = 0;
    map<int,int> m;
    cin >> N >> C;
    vector<info> v;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(m.find(tmp) == m.end()){
            m.insert({tmp,idx});
            v.push_back({idx,tmp,1});
            idx++;
        }else v[m[tmp]].cnt++;
    }
    sort(v.begin(),v.end(),cmp());
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].cnt; j++){
            cout << v[i].num << " ";
        }
    }
}