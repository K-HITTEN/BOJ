#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    cin >> N;
    if((N-1)%8==0)cout << 1;
    else if(N%8==0||(N-2)%8==0)cout << 2;
    else if((N-3)%8==0||(N-7)%8==0)cout << 3;
    else if((N-4)%8==0||(N-6)%8==0)cout << 4;
    else cout << 5;
}