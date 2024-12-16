#include<iostream>
#include<cmath>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cout << fixed;
    cout.precision(4);
    double A, B, M;
    cin >> A >> B;
    M = (B-A)/400;
    cout << 1/(pow(10,M)+1);
}