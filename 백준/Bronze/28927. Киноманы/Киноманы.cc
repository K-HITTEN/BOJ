#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int t1,e1,f1,t2,e2,f2, sum1, sum2;
    cin >> t1 >> e1 >> f1 >> t2 >> e2 >> f2;
    sum1 = t1*3 + e1*20 + f1*120;
    sum2 = t2*3 + e2*20 + f2*120;
    if(sum1 == sum2)cout << "Draw";
    else if(sum1 > sum2)cout << "Max";
    else cout << "Mel";
}