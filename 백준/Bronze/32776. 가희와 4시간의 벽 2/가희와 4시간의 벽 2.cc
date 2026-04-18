#include<iostream>

using namespace std;

int S, Ma, F, Mb;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> S >> Ma >> F >> Mb;
    if(S <= Ma + F + Mb || S <= 240)cout << "high speed rail";
    else cout << "flight";
}