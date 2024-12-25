#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int n,k;
    cin >> n >> k;
    cout << min(60+k,n)*1500+max(n-60-k,0)*3000;
}