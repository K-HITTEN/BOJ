#include <iostream>
#include <climits>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[16][16] = {0,}, dp[1<<16][16] = {0,};
int N;

int TSP(int v, int c){
    int visit = (v | (1 << c));
    if(visit == ((1<<N)-1)){
        if(arr[c][0] > 0) return arr[c][0];
        else return 16000001;
    }
    if(dp[visit][c]>0) return dp[visit][c];
    dp[visit][c] = 16000001;
    for(int i = 0; i < N; i++){
        if((visit&(1<<i)) == 0 && arr[c][i] >0){
            int tmp = TSP(visit,i) + arr[c][i];
            if(dp[visit][c] > tmp) dp[visit][c] = tmp;
        }
    }
    return dp[visit][c];
}

int main(void){
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }
    cout << TSP(0,0);
}