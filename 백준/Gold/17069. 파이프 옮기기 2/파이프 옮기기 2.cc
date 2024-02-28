#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[33][33] = {0,};
long long result[33][33][3] = {0,};



int main(void){
    fastio;
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> map[i][j];
        }
    }
    // 0 가로 1 대각선 2 세로
    result[1][2][0] = 1;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            if(map[i][j] == 0 && map[i-1][j] == 0 && map[i][j-1] == 0){
                result[i][j][1] += (result[i-1][j-1][0] + result[i-1][j-1][1] + result[i-1][j-1][2]);
            }
            if(map[i][j] == 0) {
                result[i][j][0] += (result[i][j-1][0] + result[i][j-1][1]);
                result[i][j][2] += (result[i-1][j][2] + result[i-1][j][1]);
            }
        }
    }
    cout << (result[N][N][0]+ result[N][N][1] + result[N][N][2]);
}