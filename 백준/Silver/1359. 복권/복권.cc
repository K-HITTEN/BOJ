#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, M, K;
double arr[9] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320};

double comb(int A, int B){
    if(A<B)return 0;
    return arr[A]/arr[B]/arr[A-B];
}


int main(void){
    fastio;
    cin >> N >> M >> K;
    cout<< fixed;
    cout.precision(10);
    double tmp = 0;
    for(int i = K; i<=M; i++){
        tmp += comb(M,i)*comb(N-M,M-i);
    }
    cout << tmp/comb(N,M);
}