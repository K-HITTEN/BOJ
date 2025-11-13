#include<iostream>

using namespace std;

int N, M, arr[51][51], ans[51][51], ret;
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> s;
        for(int j = 0; j < M; j++)arr[i][j] = s[j] - '0';
    }
    for(int i = 0; i < N; i++){
        cin >> s;
        for(int j = 0; j < M; j++)ans[i][j] = s[j]- '0';
    }
    for(int i = 0; i < N-2; i++){
        for(int j = 0; j < M-2; j++){
            if(arr[i][j] != ans[i][j]){
                for(int r = i; r <= i+2; r++){
                    for(int c = j; c <= j+2; c++)arr[r][c] = !arr[r][c];
                }
                ret++;
            }
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++)if(arr[i][j]!=ans[i][j]){
            cout << -1;
            return 0;
        }
    }
    cout << ret;
}