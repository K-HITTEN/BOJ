#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int n,m,r,arr[101],map[101][101], max_value = 0;

int main(void){
    fastio;
    int tmp1,tmp2,tmp3;
    cin >> n >> m >> r;
    fill(&map[0][0],&map[100][101], 10000);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        map[i][i] = 0;
    }
    for(int i = 0; i < r; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        map[tmp1][tmp2] = tmp3;
        map[tmp2][tmp1] = tmp3;
    }
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                map[i][j] = min(map[i][j],map[i][k] + map[k][j]);
            }
        }
    }
    for(int i = 1; i <= n; i++){
        int sum = 0;
        for(int j = 1; j <= n; j++){
            if(map[i][j] <= m)sum+=arr[j];
        }
        if(max_value<sum) max_value = sum;
    }
    cout << max_value;
}