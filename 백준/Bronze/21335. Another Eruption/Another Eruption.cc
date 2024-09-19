#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
#define PI 3.141592

using namespace std;

int main(void){
    fastio;
    double N;
    cin >> N;
    cout<<fixed;
    cout.precision(6);
    cout << sqrt(N/PI)*PI*2;
}