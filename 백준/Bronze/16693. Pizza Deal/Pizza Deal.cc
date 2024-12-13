#include<iostream>
#include<math.h>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    double A1, P1, R1, P2;
    cin >> A1 >> P1 >> R1 >> P2;
    if(A1/P1>(R1*R1*M_PI)/P2)cout << "Slice of pizza";
    else cout << "Whole pizza";
}