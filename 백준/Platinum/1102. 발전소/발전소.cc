#include <iostream>
#include <climits>
#include <cstring>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[16][16] = {0,}, dp[1<<16]= {0,};
int N, P;

int search(int v,int c){
    if(c==P){
        return 0;
    }
    if(dp[v]>-1) return dp[v];
    dp[v] = 16000001;
    for(int i = 0; i < N; i++){
        if((v&(1<<i)) == 0){
            int min_val = INT_MAX;
            for(int j = 0; j < N; j++){
                if((v&(1<<j)) == (1<<j)){
                    min_val = min(arr[j][i],min_val);
                }
            }
            int tmp = search((v|1<<i),c+1) + min_val;
            if(dp[v] > tmp) dp[v] = tmp;
        }
    }
    return dp[v];
}

int main(void){
    fastio;
    cin >> N;
    int K = 0;
    int c = 0;
    string s;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }
    cin >> s >> P;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'Y'){
            c++;
            K |= (1<<i);
        }
    }
    memset(dp,-1,sizeof(dp));
    if(c>=P)cout << 0;
    else if(K == 0)cout << -1;
    else cout << search(K,c);
}