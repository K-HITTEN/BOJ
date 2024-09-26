#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int src[5], ret, ans = 0, val = 0;

void comb(int srcIdx, int tgtIdx, int sum){
    if(tgtIdx == 3){
        if((sum%10)>ret){
            ret = (sum%10);
        }
        return;
    }
    if(srcIdx == 5)return;
    comb(srcIdx+1,tgtIdx+1,sum+src[srcIdx]);
    comb(srcIdx+1,tgtIdx,sum);
}

int main(void){
    fastio;
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int j = 0; j < 5; j++)cin >> src[j];
        ret = 0;
        comb(0, 0, 0);
        if(ret >= val){
            val = ret;
            ans = i;
        }
    }
    cout << ans;
}