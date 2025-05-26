#include<iostream>

using namespace std;

int N,M,K,ret, A[101][101], B[101][101];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> A[i][j];
        }
    }
    cin >> M >> K;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < K; j++){
            cin >> B[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < K; j++){
            ret = 0;
            for(int k = 0; k < M; k++){
                ret += A[i][k]*B[k][j];
            }
            cout << ret << " ";
        }
        cout << "\n";
    }
}