#include <iostream>
#include <algorithm>
#include <climits>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int min_dp[3], max_dp[3];

int main(void){
    fastio;
    int N, tmp1, tmp2, tmp3, temp1, temp2;
    cin >> N;
    cin >> min_dp[0] >> min_dp[1] >> min_dp[2];
    max_dp[0] = min_dp[0];
    max_dp[1] = min_dp[1];
    max_dp[2] = min_dp[2];
    for(int i = 1; i < N; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        temp1 = min_dp[0];
        temp2 = min_dp[2];
        min_dp[0] = min(min_dp[0],min_dp[1])+tmp1;
        min_dp[2] = min(min_dp[1],min_dp[2])+tmp3;
        min_dp[1] = min(min_dp[1],min(temp1,temp2))+tmp2;
        temp1 = max_dp[0];
        temp2 = max_dp[2];
        max_dp[0] = max(max_dp[0],max_dp[1])+tmp1;
        max_dp[2] = max(max_dp[1],max_dp[2])+tmp3;
        max_dp[1] = max(max_dp[1],max(temp1,temp2))+tmp2;
    }
    cout << max(max_dp[0],max(max_dp[1],max_dp[2])) <<' ' << min(min_dp[0],min(min_dp[1],min_dp[2]));
}