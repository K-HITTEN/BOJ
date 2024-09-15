#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    cout << min(a,min(b,c))+min(d,e)-50;
}