#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v;
bool dp[51][1001];

int main(void){
    fastio;
    int N, S, M;
    cin >> N >> S >> M;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    dp[0][S] = true;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= M; j++){
            if(dp[i][j]){
                if(j+v[i]<=M)dp[i+1][j+v[i]]=true;
                if(j-v[i]>=0)dp[i+1][j-v[i]]=true;
            }
        }
    }
    for(int i = M; i >=0; i--){
        if(dp[N][i]){
            cout << i;
            return 0;
        }
    }
    cout << -1;
}