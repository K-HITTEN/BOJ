#include<iostream>

using namespace std;

double max(double a, double b){
    if(a>b)return a;
    else return b;
}

double min(double a, double b){
    if(a<b)return a;
    else return b;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    double k;
    cin >> k;
    cout << fixed;
    cout.precision(2);
    k*=0.01;
    k+=25;
    cout << min(2000,max(100,k));
}