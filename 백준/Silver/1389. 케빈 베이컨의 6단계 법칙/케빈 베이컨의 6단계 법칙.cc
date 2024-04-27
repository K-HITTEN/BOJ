#include <iostream>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
using namespace std;

int N, M;
const int INF = 1e9;
int dist[101][101];

int main(){
    fastio;
    int a, b;
    cin >> N >> M;
    fill(&dist[0][0], &dist[0][0] + 101*101, INF);
    for(int i=0; i<M; i++){
        cin >> a >> b;
        dist[a][b] = 1;
        dist[b][a] = 1;
    }
    for(int i=1; i<=N; i++){          
        for(int j=1; j<=N; j++){      
            for(int k=1; k<=N; k++){ 
                dist[j][k] = min(dist[j][k] , dist[j][i]+dist[i][k]);
            }
        }
    }
    
    int m = INF;
    int ans = 1;
    
    for(int i=1; i<=N; i++){
        int sum = 0;
        for(int j=1; j<=N; j++){
            sum += dist[i][j];
        }
        if(sum < m){
            ans = i;
            m = sum;
        }
    }
    cout << ans;

    return 0;
}