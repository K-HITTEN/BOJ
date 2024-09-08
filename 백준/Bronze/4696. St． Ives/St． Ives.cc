#include<iostream>
#include<cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    double N;
    cout << fixed;
    cout.precision(2);
    while(true){
        cin >> N;
        if(N == 0)break;
        cout << 1+N+pow(N,2)+pow(N,3)+pow(N,4)<<"\n";
    }
}