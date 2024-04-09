#include <iostream>
#include <algorithm>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v;
int score[5][5];

int dp[5][5][100000];

int Dp(int lf,int rf,int idx){
    if(lf == rf && lf != 0) return 987654321;
    if(idx == v.size())return 0;
    if(dp[lf][rf][idx]>0)return dp[lf][rf][idx];
    dp[lf][rf][idx] = min(Dp(v[idx],rf,idx+1)+score[lf][v[idx]],Dp(lf,v[idx],idx+1)+score[rf][v[idx]]);
    return dp[lf][rf][idx];
}

int main(void){
    fastio;
    int tmp;
    while(true){
        cin >> tmp;
        if(tmp == 0)break;
        v.push_back(tmp);
    }
    score[1][1] = score[2][2] = score[3][3] = score[4][4] = 1;
    score[0][1] = score[0][2] = score[0][3] = score[0][4] = 2;
    score[1][2] = score[1][4] = score[2][1] = score[2][3] = score[3][2] = score[3][4] = score[4][3] = score[4][1] = 3;
    score[1][3] = score[2][4] = score[3][1] = score[4][2] = 4;
    cout << Dp(0,0,0);
}