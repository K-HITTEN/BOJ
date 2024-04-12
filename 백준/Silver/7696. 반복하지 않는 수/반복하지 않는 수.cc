#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dp[1000001];
bool visited[10];

int main(void){
    fastio;
    long long idx = 1;
    int i = 1, tmp;
    while(i <=1000000){
        long long _idx = idx;
        bool FLAG = false;
        fill(visited,visited+10,false);
        while(_idx != 0){
            if(visited[_idx%10]){
                FLAG = true;
                break;
            }
            visited[_idx%10] = true;
            _idx /= 10;
        }
        if(!FLAG){
            dp[i] = idx;
            i++;
        }
        idx++;
    }
    while(true){
        cin >> tmp;
        if(tmp == 0)return 0;
        cout << dp[tmp] << "\n";
    }
}