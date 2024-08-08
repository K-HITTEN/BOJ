#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, A, B;
    cin >> N >> A >> B;
    if(N>A||A<B)cout<<"Bus";
    else if(A==B)cout << "Anything";
    else cout << "Subway";
}