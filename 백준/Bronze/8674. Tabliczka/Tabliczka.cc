#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    long long a, b;
    cin >> a >> b;
    if(a%2==0||b%2==0)cout<<0;
    else cout<< min(a,b);
}