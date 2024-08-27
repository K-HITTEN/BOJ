#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, M;
    cin >> N >> M;
    if(N == 1 || M == 1|| (N==2&&M==2))cout << 1;
    else if(M==2||(N==2&&M<5)) cout << 2;
    else if((N==2&&M<7)||M==3)cout << 3;
    else if(N==2|| M<7)cout<<4;
    else cout << M-2;
}