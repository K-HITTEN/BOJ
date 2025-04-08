#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int i;
    cin >> i;
    if(i%8==1)cout << 'a';
    else if(i%8==2)cout << 'b';
    else if(i%8==3)cout << 'c';
    else if(i%8==4)cout << 'd';
    else if(i%8==5)cout << 'e';
    else if(i%8==6)cout << 'f';
    else if(i%8==7)cout << 'g';
    else cout << 'h';
    if(i%8==0){
        cout << i/8;
    }
    else cout << i/8+1;
}