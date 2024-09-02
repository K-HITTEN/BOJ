#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, M, O, X, cnt = 0;
    char c;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        O = X = 0;
        for(int j = 0; j < M; j++){
            cin >> c;
            if(c =='O')O++;
            else X++;
        }
        if(O>X)cnt++;
    }
    cout << cnt;
}