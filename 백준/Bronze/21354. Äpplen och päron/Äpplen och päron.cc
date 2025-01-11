#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A, P;
    cin >> A >> P;
    A*=7;
    P*=13;
    if(A>P)cout << "Axel";
    else if(A<P)cout << "Petra";
    else cout << "lika";
}