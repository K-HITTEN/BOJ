#include<iostream>
#include<cmath>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T;
    double a, b, c, d;
    cin >> T;
    while(T--){
        cin >> a >> b >> c >> d;
        if(a/b>3.141592*pow(c,2)/d)cout << "Slice of pizza\n";
        else cout << "Whole pizza\n";
    }
}