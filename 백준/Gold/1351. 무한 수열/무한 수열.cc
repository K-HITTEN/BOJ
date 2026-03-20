#include<iostream>
#include<string>
#include<map>
#define ll long long

using namespace std;

map<string,ll> m;
ll N, P, Q;

ll check(ll num){
    if(m.find(to_string(num))!=m.end())return m[to_string(num)];
    else{
        ll tmp = check(num/P)+check(num/Q);
        m.insert({to_string(num),tmp});
        return tmp;
    } 
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    m.insert({"0",1});
    cin >> N >> P >> Q;
    cout << check(N);
}