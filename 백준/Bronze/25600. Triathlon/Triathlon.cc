#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, a, d, g, sum = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> a >> d >> g;
        int tmp = a*(d+g);
        if(a == d+g)tmp*=2;
        sum = max(sum, tmp);
    }
    cout << sum;
}