#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio

using namespace std;

int N, K, result = 0;
int omr[20],answer[20];

void dfs(int idx, int src[20]){
    if(idx > K)return;
    int score = 0;
    for(int i = 0; i < N; i++){
        if(answer[i] == src[i])score++;
    }
    if(score>result)result = score;
    for(int i = 0; i < N; i++){
        int _src[20];
        for(int j = 0; j < N; j++)_src[j]=src[j];
        for(int j = N-1; j>i; j--)_src[j]=_src[j-1];
        _src[i] = 0;
        dfs(idx+1,_src);
        for(int j = 0; j < N; j++)_src[j]=src[j];
        for(int j = i; j < N-1; j++)_src[j]=_src[j+1];
        _src[N-1] = 0;
        dfs(idx+1,_src);
    }
}

int main(void){
    fastio;
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        cin >> answer[i];
    }
    for(int i = 0; i < N; i++){
        cin >> omr[i];
    }
    dfs(0,omr);
    cout << result;
}