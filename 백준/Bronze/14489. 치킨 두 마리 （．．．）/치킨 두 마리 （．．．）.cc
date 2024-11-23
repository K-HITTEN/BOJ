#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A, B, C;
    cin >> A >> B >> C;
    if(A+B>=2*C)cout << A+B-2*C;
    else cout << A+B;
}