#include <iostream>
#include <algorithm>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[101][101];

int main(void){
    fastio;
    fill(&arr[0][0],&arr[100][100],500001);
    int N, M, tmp1, tmp2;
    cin>> N >> M;
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2;
        arr[tmp1][tmp2] = 1;
        arr[tmp2][tmp1] = 1;
    }
    for(int i = 1; i <= N; i++) arr[i][i] = 0;
    for(int k = 1; k <= N; k++){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                arr[i][j] = min(arr[i][j],arr[i][k]+arr[k][j]);
                
            }
        }
    }
    int min = 500001, result = 0;
    for(int i = 1; i <= N; i++){
        arr [i][0] = 0; 
        for(int j = 1; j <= N; j++){
            arr[i][0] += arr[i][j];
        }
        if(min>arr[i][0]){
            min = arr[i][0];
            result = i;
        }
    }
    cout << result;
}