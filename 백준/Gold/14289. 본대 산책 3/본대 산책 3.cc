#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, M;

vector<vector<long long>> multiply(vector<vector<long long>> &a,vector<vector<long long>> &b){
    vector<vector<long long>> tmp(N, vector<long long>(N));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                tmp[i][j] = (tmp[i][j]+(a[i][k]*b[k][j]))%1000000007;
            }
        }
    }
    return tmp;
}

int main(void){
    fastio;
    int tmp1, tmp2;
    long long D;
    cin >> N >> M;
    vector<vector<long long>> v(N,vector<long long>(N));
    vector<vector<long long>> result(N,vector<long long>(N));
    for(int i = 0; i < N; i++){
        result[i][i] = 1;
    }
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2;
        tmp1--;
        tmp2--;
        v[tmp1][tmp2] = 1;
        v[tmp2][tmp1] = 1;
    }
    cin >> D;
    while(D>0){
        if(D%2==1)result = multiply(result,v);
        v = multiply(v,v);
        D/=2;
    }
    cout << result[0][0];
}