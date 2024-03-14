#include<iostream>
#include<vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<vector<long long>> matrix, matrix2, copy_matrix;
vector<vector<vector<long long>>> storage;
long long N, B;
vector<vector<long long>> mult(vector<vector<long long>> &x, vector<vector<long long>> &y){
    vector<vector<long long>> tmp = copy_matrix;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                tmp[i][j] = (tmp[i][j]+(x[i][k]*y[k][j]))%1000;
            }
        }
    }
    return tmp;
}

int main(void){
    fastio;
    cin >> N >> B;
    for(int i = 0; i < N; i++){
        vector<long long> tmp;
        vector<long long> tmp2;
        tmp.resize(N);
        tmp2.resize(N);
        for(int j = 0; j < N; j++){
            cin >> tmp[j];
            tmp[j] %= 1000;
            tmp2[j] = 0;
        }
        matrix.push_back(tmp);
        copy_matrix.push_back(tmp2);
    }
    while(B>1){
        if(B%2 == 1){
            storage.push_back(matrix);
        }
        matrix = mult(matrix,matrix);
        B /= 2;
    }
    for(int i = 0; i < storage.size(); i++){
        matrix = mult(matrix,storage[i]);
    }
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[i].size(); j++){
            cout << matrix[i][j] <<" ";
        }
        cout << "\n";
    }
}