#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp, M = 0, Y = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        Y += (tmp/30+1)*10;
        M += (tmp/60+1)*15;
    }
    if(M==Y)cout << "Y M " << Y;
    else if(M<Y)cout << "M " << M;
    else cout << "Y " << Y;
}