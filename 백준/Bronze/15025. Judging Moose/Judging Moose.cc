#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int l, r;
    cin >> l >> r;
    if(max(l,r)==0)cout << "Not a moose";
    else{
        if(l==r)cout << "Even " << 2*l;
        else cout << "Odd " << 2*max(l,r);
    }
}