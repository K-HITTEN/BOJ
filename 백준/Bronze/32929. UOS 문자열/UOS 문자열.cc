#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int x;
    cin >> x;
    x%=3;
    if(x==0)cout<<'S';
    else if(x==1)cout<<'U';
    else cout << 'O';
}