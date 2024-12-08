#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N,M,K;
    cin >> N >> M >> K;
    cout << min(M,K)+min(N-M,N-K);
}