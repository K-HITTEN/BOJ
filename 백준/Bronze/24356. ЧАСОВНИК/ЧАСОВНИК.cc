#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int t1,m1,t2,m2,sum1,sum2;
    cin >> t1 >> m1 >> t2 >> m2;
    sum1 = t1*60+m1;
    sum2 = t2*60+m2;
    if(t1>t2||(t1==t2&&m1>m2))sum2 += 1440;
    cout << sum2-sum1 << ' ' << (sum2-sum1)/30;
}