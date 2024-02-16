#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int M, N;
    cin >> M >> N;
    bool check[N+1] = {false};
    check[1] = true;
    for(int i = 2; i <= N; i++){
        if(!check[i]){
            for(int j = 2*i; j<=N; j+=i){
                check[j] = true;
            }
        }
    }
    for(int i = M; i <= N; i++){
        if(!check[i])cout << i << "\n";
    }
}