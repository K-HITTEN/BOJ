#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int a1,b1,a2,b2;
    cin >> a1 >> b1 >> b2 >> a2;
    if(a1+a2>b1+b2)cout << "Persepolis";
    else if(a1+a2<b1+b2)cout << "Esteghlal";
    else {
        if(a2>b1)cout << "Persepolis";
        else if(a2<b1)cout << "Esteghlal";
        else cout << "Penalty";
    }
}