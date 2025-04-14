#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int w,l,h;
    cin >> w >> l >> h;
    if((min(w,l) >= 2*h) && (max(w,l) <= 2*min(w,l)))cout << "good";
    else cout << "bad";
}