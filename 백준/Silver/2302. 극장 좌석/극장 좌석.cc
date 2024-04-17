#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp[41];    
int N, M, tmp;
vector<int> v;

int main(void){
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2; i <= 40; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cin >> N >> M;
    v.resize(M+2);
    for(int i = 0; i < M; i++)cin >> v[i];
    v[M] = 0;
    v[M+1] = N+1;
    sort(v.begin(),v.end());
    int result = 1;
    for(int i = 1; i<v.size(); i++){
        int tmp = v[i]- v[i-1]-1;
        result *= dp[tmp];
    }
    cout << result;
}