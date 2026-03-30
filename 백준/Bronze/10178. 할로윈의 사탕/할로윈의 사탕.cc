#include<iostream>

using namespace std;

int T, c, v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        cin >> c >> v;
        cout << "You get " << c/v << " piece(s) and your dad gets " << c%v << " piece(s).\n"; 
    }
}