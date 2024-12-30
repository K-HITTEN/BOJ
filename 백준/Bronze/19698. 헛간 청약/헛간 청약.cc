#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, W, H, L;
    cin >> N >> W >> H >> L;
    if((W/L)*(H/L)<N)cout << (W/L)*(H/L);
    else cout << N;
}