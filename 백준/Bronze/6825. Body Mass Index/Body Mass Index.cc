#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    double kg, m, ret;
    cin >> kg >> m;
    ret = kg/(m*m);
    if(ret>25)cout<< "Overweight";
    else if(ret<18.5)cout<<"Underweight";
    else cout<< "Normal weight";
}