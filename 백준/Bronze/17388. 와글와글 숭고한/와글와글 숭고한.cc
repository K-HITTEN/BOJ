#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int S,K,H;
    cin >> S >> K >> H;
    if(S+K+H>=100)cout << "OK";
    else if(S<K&&S<H)cout << "Soongsil";
    else if(K<S&&K<H)cout << "Korea";
    else cout << "Hanyang";
}