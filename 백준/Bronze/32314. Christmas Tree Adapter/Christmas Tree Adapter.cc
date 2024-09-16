#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int a,w,v;
    cin >> a >> w >> v;
    if(a<=w/v)cout << 1;
    else cout << 0;
}