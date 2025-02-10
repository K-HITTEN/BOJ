#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int a,b,c;
    cin >> a >> b >> c;
    if(2*max({a,b,c})==a+b+c)cout << 1;
    else if(pow(max({a,b,c}),2)==a*b*c)cout << 2;
    else cout << 3;
}