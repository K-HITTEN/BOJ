#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A, B;
    cin >> A >> B;
    if((A+B)%12 ==0) cout << 12;
    else cout << (A+B)%12;
}