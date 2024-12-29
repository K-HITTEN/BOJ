#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int S, M, L;
    cin >> S >> M >> L;
    if(S+2*M+3*L<10)cout << "sad";
    else cout << "happy";
}