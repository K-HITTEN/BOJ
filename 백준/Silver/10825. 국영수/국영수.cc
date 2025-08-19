#include<iostream> 
#include<vector>
#include<algorithm>

using namespace std;

struct info{
    string name;
    int k,e,m;
};

struct cmp{
    bool operator()(info &a, info &b){
        if(a.k==b.k&&a.e==b.e&&a.m==b.m)return a.name<b.name;
        else if(a.k==b.k&&a.e==b.e)return a.m>b.m;
        else if(a.k==b.k)return a.e<b.e;
        else return a.k>b.k;
    }
};

vector<info> v;
int N;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++){
        cin >> v[i].name >> v[i].k >> v[i].e >> v[i].m;
    }
    sort(v.begin(),v.end(),cmp());
    for(int i = 0; i < N; i++)cout << v[i].name << "\n";
}