#include<iostream>
#include<cmath>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cout<<fixed;
    cout.precision(6);
    int n;
    double ret, x;
    cin >> n;
    while(n--){
        cin >> x;
        ret += x*x*x;
    }
    cout << cbrt(ret);
}