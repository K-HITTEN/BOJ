#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A,B,C,D,E, sum = 0;
    cin >> A >> B >> C >> D >> E;
    if(A>0&&B>0)cout<<(B-A)*E;
    else cout << abs(A)*C+D+B*E;
}