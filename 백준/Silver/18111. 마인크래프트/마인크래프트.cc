#include <iostream>
#include <climits>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;


int main(void){
    fastio;
    int N, M, B, max = -1, min = 257;
    int mintime = INT_MAX;
    cin >> N >> M >> B;
    int arr[N][M] = {0};
    for(int i = 0; i< N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
            if(min > arr[i][j])min = arr[i][j];
            if(max < arr[i][j])max = arr[i][j];
        }
    }
    int height = min;
    for(int i = min; i<=max; i++){
        int timesum = 0,block = B;
        for(int y = 0; y < N; y++){
            for(int x = 0; x <M; x++){
                if(arr[y][x] == i)continue;
                if(arr[y][x]<i){
                    timesum += (i-arr[y][x]);
                    block -= (i-arr[y][x]);
                }else{
                    timesum += 2*(arr[y][x]-i);
                    block += (arr[y][x]-i);
                }
            }
        }
        if(timesum<=mintime && block>=0) {
            mintime = timesum;
            height = i;
        }
    }
    cout << mintime << " " << height;
}