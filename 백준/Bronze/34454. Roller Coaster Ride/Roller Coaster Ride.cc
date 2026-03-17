#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N,C,P;
    cin >> N >> C >> P;
    if(N>C*P)cout << "no";
    else cout << "yes";
}