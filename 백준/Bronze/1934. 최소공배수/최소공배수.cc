#include<iostream>

using namespace std;

int calc(int x, int y){
    if(x%y == 0)return y;
    else return calc(y,x % y);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, a, b;
    cin >> T;
    while(T--){
        cin >> a >> b;
        if(a>b)cout << a*b/calc(a,b)<<"\n";
        else cout << a*b/calc(b,a)<<"\n";
    }
}