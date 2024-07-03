#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, M, a = 0, b = 0;
    vector<int> A,B,C;
    cin >> N >> M;
    A.resize(N);
    B.resize(M);
    for(int i = 0; i < N; i++)cin >> A[i];
    for(int i = 0; i < M; i++)cin >> B[i];
    while(a < N && b < M){
        if(A[a]<B[b]){
            C.push_back(A[a]);
            a++;
        }else{
            C.push_back(B[b]);
            b++;
        }
    }
    if(a == N){
        while(b<M){
            C.push_back(B[b]);
            b++;
        }
    }else{
        while(a<N){
          C.push_back(A[a]);
          a++;
        }
    }
    for(int i = 0; i < C.size(); i++)cout << C[i] << " ";
}