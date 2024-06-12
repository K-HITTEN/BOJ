#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    long long N, fact = 1;
    cin >> N;
    for(long long i = 1; i <= N; i++)fact *= i;
    cout << fact/(7*24*60*60);
}