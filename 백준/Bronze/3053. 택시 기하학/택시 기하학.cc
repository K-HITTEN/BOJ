#include<iostream>
#define PI 3.14159265358979

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cout << fixed;
    cout.precision(6);
    double R;
    cin >> R;
    cout << R*R*PI << "\n" << R*R*2;
}