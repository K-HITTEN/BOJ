#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    cin >> N;
    if(N<2)cout << 1;
    else if(N==2)cout<< 2;
    else if(N==3)cout<< 6;
    else if(N==4)cout<< 4;
    else cout<< 0;
}