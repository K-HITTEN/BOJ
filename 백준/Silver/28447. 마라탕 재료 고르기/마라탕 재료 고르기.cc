#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[10][10], N, K, max_val = -987654321;
bool src[10];

void comb(int srcIdx, int cnt){
    if(srcIdx == N){
        if(cnt == K){
            int tmp = 0;
            for(int i = 0; i < N; i++){
                if(src[i]){
                    for(int j = i+1; j < N; j++){
                        if(src[j]){
                            tmp += arr[i][j];
                        }
                    }
                }
            }
            max_val = max(max_val,tmp);
        }
        return;
    }
    if(cnt > K)return;
    src[srcIdx] = true;
    comb(srcIdx+1,cnt+1);
    src[srcIdx] = false;
    comb(srcIdx+1,cnt);
}

int main(void){
    fastio;
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }
    comb(0,0);
    cout << max_val;
}
