#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int A, P, C;
    cin >> A >> P >> C;
    cout << max(A+C,P);
}