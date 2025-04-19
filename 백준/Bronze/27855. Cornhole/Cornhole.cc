#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int a,b,c,d,A,B;
    cin >> a >> b >> c >> d;
    A = a*3+b;
    B = c*3+d;
    if(A==B){
        cout << "NO SCORE";
        return 0;
    }
    else if(A>B)cout << 1;
    else cout << 2;
    cout << " " << abs(A-B);
}