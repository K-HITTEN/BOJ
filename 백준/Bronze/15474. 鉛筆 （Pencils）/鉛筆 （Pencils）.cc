#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, A, B, C, D, sum1 = 0, res1 = 0, sum2 = 0, res2 = 0;
    cin >> N >> A >> B >> C >> D;
    while(res1<N){
        res1+=A;
        sum1+=B;
    }
    while(res2<N){
        res2+=C;
        sum2+=D;
    }
    cout << min(sum1,sum2);
}