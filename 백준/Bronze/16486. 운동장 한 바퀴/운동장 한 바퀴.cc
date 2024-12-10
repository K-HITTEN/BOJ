#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int d1,d2;
    cin >> d1 >> d2;
    cout<<fixed;
    cout.precision(6);
    cout<<d1*2+2*d2*3.141592;
}