#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    long long n,m;
    cin >> n >> m;
    if(n==m)cout << n*2;
    else cout << min(n,m)*2+1;
}