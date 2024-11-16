#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A, B, C;
    cin >> A >> B >> C;
    if(A==B||B==C||A==C||((A+B+C)-max({A,B,C})==max({A,B,C})))cout<<'S';
    else cout << 'N';
}