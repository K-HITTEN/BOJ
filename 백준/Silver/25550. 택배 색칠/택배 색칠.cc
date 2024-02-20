#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[1000][1000] = {0,};

int main(void){
    fastio;
    int N, M; 
    long long sum = 0, tmp;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 1; i < N-1; i++){
        for(int j = 1; j < M-1; j++){
            tmp = min(arr[i-1][j],min(arr[i+1][j],min(arr[i][j+1],arr[i][j-1])));
            if(arr[i][j] == 0)continue;
            if(tmp >= arr[i][j]) sum += arr[i][j]-1;
            else sum += tmp;
        }
    }
    cout << sum;
}