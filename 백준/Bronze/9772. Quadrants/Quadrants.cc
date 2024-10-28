#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    double a, b;
    while(true){
        cin >> a >> b;
        if(a==0||b==0)cout << "AXIS\n";
        else if(a>0&&b>0)cout<< "Q1\n";
        else if(a<0&&b>0)cout<< "Q2\n";
        else if(a<0&&b<0)cout<< "Q3\n";
        else cout << "Q4\n";
        if(a==0&&b==0)break;
    }
}