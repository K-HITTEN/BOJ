#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    cin >> N;
    long long tmp = 1;
    for(long long i = 1; i <=N; i++){
        tmp *= i;
    }
    cout << tmp;
}