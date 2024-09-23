#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int A, B;
    cin >> A >> B;
    if(A+B*7>30)cout << 0;
    else cout << 1;
}