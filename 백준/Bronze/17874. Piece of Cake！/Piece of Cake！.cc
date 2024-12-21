#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int n, h, v;
    cin >> n >> h >> v;
    cout << max({h*v,h*(n-v),(n-h)*v,(n-h)*(n-v)})*4;
}