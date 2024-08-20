#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, M, t = 0;
string tmp;

struct info{
    int cnt;
    string s;
};

struct cmp{
    bool operator()(info &a, info&b){
        if(a.cnt == b.cnt){
            if(a.s.length()==b.s.length()){
                return a.s < b.s;
            }else return a.s.length()>b.s.length();
        }else return a.cnt>b.cnt;
    }
};

int main(void){
    fastio;
    map<string,int> m;
    vector<info> v;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(tmp.length()<M)continue;
        if(m.find(tmp)!=m.end()){
            v[m[tmp]].cnt++;
        }else{
            m.insert({tmp,t});
            v.push_back({1,tmp});
            t++;
        }
    }
    sort(v.begin(),v.end(),cmp());
    for(int i = 0; i < v.size(); i++){
        cout << v[i].s << "\n";
    }
}