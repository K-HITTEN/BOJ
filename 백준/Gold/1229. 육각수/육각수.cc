#include<iostream>
#include<vector>

using namespace std;

int dp[1000001];
vector<int> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, t = 2;
    cin >> N;
    fill(dp,dp+1000001,6);
    dp[0] = 0;
    v.push_back(1);
    while(true){
        if(v.back()+2*t+2*t-3>1000000)break;
        else{
            v.push_back(v.back()+2*t+2*t-3);
            t++;
        }
    }
    for(int i = 1; i <= N; i++){
        for(int j = 0; j < v.size(); j++){
            if(i>=v[j]){
                dp[i] = min(dp[i], dp[i-v[j]]+1);
            }
            else break;
        }
    }
    cout << dp[N];
}