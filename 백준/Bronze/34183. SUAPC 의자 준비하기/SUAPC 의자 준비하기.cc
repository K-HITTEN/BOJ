#include<iostream>

using namespace std;

int N, M, A, B;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M >> A >> B;
    N *= 3;
    N -= M;
    if(N>0)cout << N*A+B;
    else cout << 0;
}