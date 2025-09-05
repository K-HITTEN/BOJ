#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string A, B, C, D, AB , CD;
    cin >> A >> B >> C >> D;
    AB = A+B;
    CD = C+D;
    cout << stoll(AB)+stoll(CD);
}