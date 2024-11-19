#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T = 6, W = 0;
    char tmp;
    while(T--){
        cin >> tmp;
        if(tmp=='W')W++;
    }
    if(W==0)cout << -1;
    else if(W<3)cout << 3;
    else if(W<5)cout << 2;
    else cout << 1;
}