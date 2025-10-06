#include<iostream>
#include<cmath>
#define ll long long

using namespace std;

bool check[1000001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    ll n, m, cnt;
    cin >> n >> m;
    cnt = m-n+1;
    for(ll i = 2; i <= sqrt(m); i++){
        ll tmp = i*i;
        ll divide = ceil((double)n/(double)tmp);
        ll start = tmp*divide;
        for(ll j = start; j <= m; j+= tmp){
            if(!check[j-n]){
                check[j-n] = true;
                cnt--;
            }
        }
    }
    cout << cnt;
}