#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M, K;
    cin >> N >> M >> K;
    K++;
    if(K%M == 0)cout << K/M-1 << " " << M-1;
    else  cout << K/M << " " << K%M-1;
}