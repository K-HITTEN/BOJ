#include<iostream>
#include<cmath>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    double w, h;
    cin >> w >> h;
    cout << fixed;
    cout.precision(6);
    cout << w+h-sqrt(w*w+h*h);
}