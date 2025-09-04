#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

struct info{
    string s;
    int n;
};

struct cmp{
    bool operator()(info &a, info &b){
        if(a.n==b.n)return a.s<b.s;
        else return a.n>b.n;
    }
};

int idx = 0, N;
string tmp;
map<string,int> m;
vector<info> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> tmp;
        if(m.find(tmp)==m.end()){
            m.insert({tmp,idx++});
            v.push_back({tmp,1});
        }else v[m[tmp]].n++;
    }
    sort(v.begin(),v.end(),cmp());
    cout << v[0].s;
}