#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, X, ret = -1, S, T;
    cin >> N >> X;
    for(int i = 0; i < N; i++){
        cin >> S >> T;
        if(S+T<=X){
            ret = max(ret, S);
        }
    }
    cout << ret;
}