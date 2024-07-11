#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, sum = 0;
    for(int i = 0; i < 5; i++){
        cin >> N;
        if(N <40)N = 40;
        sum += N;
    }
    cout << sum/5;
}