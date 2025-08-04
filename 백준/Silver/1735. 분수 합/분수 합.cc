#include<iostream>

using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d;
    e = a*d + b*c;
    f = b*d;
    g = gcd(e,f);
    cout << e/g << " " << f/g;
    
}