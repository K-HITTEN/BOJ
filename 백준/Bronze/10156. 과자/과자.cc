#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int K, N, M;
    cin >> K >> N >> M;
    if(K*N>M)cout<< K*N-M;
    else cout << 0;
}