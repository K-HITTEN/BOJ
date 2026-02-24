#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A, B, C;
    cin >> A >> B >> C;
    if(A+B+C-max({A,B,C})==max({A,B,C}))cout << 1;
    else cout << 0;
}