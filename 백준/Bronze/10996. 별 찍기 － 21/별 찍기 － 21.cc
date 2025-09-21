#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, K;
    cin >> N;
    if(N > 1) K = N*2;
    else K = N;
    for(int i = 0; i < K; i++){
        for(int j = 0; j < N; j++){
            if((i+j)%2)cout << ' ';
            else cout << '*';
        }
        cout << '\n';
    }
}