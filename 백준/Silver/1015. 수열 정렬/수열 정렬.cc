#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct info{
    int a,b,c;
};

struct cmp1{
    bool operator()(info &a, info &b){
        return a.b < b.b;
    }
};

struct cmp2{
    bool operator()(info &a, info &b){
        if(a.a == b.a)return a.b < b.b;
        return a.a < b.a;
    }
};

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, tmp;
    cin >> N;
    vector<info> v;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        v.push_back({tmp,i,1});
    }
    sort(v.begin(),v.end(),cmp2());
    for(int i = 0; i < N; i++){
        v[i].c = i;
    }
    sort(v.begin(),v.end(),cmp1());
    for(int i = 0; i < N; i++)cout << v[i].c << " ";
}