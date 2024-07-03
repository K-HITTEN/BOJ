#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[301][301];

int main(void){
    fastio;
    int N,M,K,a,b,x,y;
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            cin >> arr[i][j];
            arr[i][j] += (arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1]);
        }
    }
    cin >> K;
    for(int i = 0; i < K; i++){
        cin >> a >> b >> x >> y;
        cout << arr[x][y] - arr[a-1][y] - arr[x][b-1] + arr[a-1][b-1] << "\n";
    }
}