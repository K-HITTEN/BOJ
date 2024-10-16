#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int t1,t2,t3,t4;
    cin >> t1 >> t2 >> t3 >> t4;
    if(t1<t2&&t2<t3&&t3<t4)cout<<"Fish Rising";
    else if(t1>t2&&t2>t3&&t3>t4)cout<<"Fish Diving";
    else if(t1==t2&&t2==t3&&t3==t4)cout<<"Fish At Constant Depth";
    else cout<<"No Fish";
}