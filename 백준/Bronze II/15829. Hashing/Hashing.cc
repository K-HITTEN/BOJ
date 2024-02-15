#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp;
    long long sum = 0;
    char c;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> c;
        tmp = (int)c-96; 
        sum += (tmp*pow(31,i));
    }
    cout << sum%1234567891;
}