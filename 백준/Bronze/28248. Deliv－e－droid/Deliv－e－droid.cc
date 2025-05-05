#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int P, C;
    cin >> P >> C;
    if(P>C)cout << 500+P*50-C*10;
    else cout << P*50-C*10;
}