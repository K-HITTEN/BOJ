#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[101][101];

int main(void){
    fastio;
    fill(&arr[0][0],&arr[100][101], 987654321);
    int N, K, tmp1, tmp2;
    cin >> N >> K;
    for(int i = 0; i < K; i++){
        cin >> tmp1 >> tmp2;
        arr[tmp1][tmp2] = 1;
        arr[tmp2][tmp1] = 1;
    }
    for(int k = 1; k<=N; k++){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                if(i==j||i==k||k==j)continue;
                arr[i][j] = min(arr[i][j], arr[i][k]+arr[k][j]);
            }
        }
    }
    bool FLAG = false;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j<= N; j++){
            if(i==j)continue;
            if(arr[i][j]>6)FLAG=true;
            if(FLAG)break;
        }
    }
    if(FLAG)cout<< "Big World!";
    else cout<<"Small World!";
}