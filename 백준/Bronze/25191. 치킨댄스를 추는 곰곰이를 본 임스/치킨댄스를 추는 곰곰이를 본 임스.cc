#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, A, B;
    cin >> N >> A >> B;
    A/=2;
    cout << min(N,A+B);
}