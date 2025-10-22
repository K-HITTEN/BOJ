#include<iostream>

using namespace std;

int N, M, map[51][51];
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> s;
        for(int j = 0; j < M; j++)map[i][j] = s[j]-'0';
    }
    for(int k = min(N, M)-1; k > 0; k--){
        for(int i = 0; i < N-k; i++){
            for(int j = 0; j < M-k; j++){
                if(map[i][j]==map[i+k][j]&&map[i][j]==map[i][j+k]&&map[i][j]==map[i+k][j+k]){
                    k++;
                    cout << k*k;
                    return 0;
                }
            }
        }
    }
    cout << 1;
}