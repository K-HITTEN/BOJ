#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp;
    long long sum = 0, tmp2;
    char c;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> c;
        tmp = (int)c-96;
        tmp2 = 1;
        for(int j = 0; j < i; j++) tmp2=((tmp2%1234567891)*31)%1234567891; 
        sum += ((tmp%1234567891)*(tmp2%1234567891))%1234567891;
    }
    cout << sum%1234567891;
}