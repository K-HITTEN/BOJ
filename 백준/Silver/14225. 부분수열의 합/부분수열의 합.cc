#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool visited[2000001], src[20];
int N, S[20];

void comb(int srcIdx){
    if(srcIdx==N){
        int sum = 0;
        for(int i = 0; i < N; i++){
            if(src[i])sum += S[i];
        }
        visited[sum] = true;
        return;
    }
    src[srcIdx] = true;
    comb(srcIdx+1);
    src[srcIdx] = false;
    comb(srcIdx+1);
}

int main(void){
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++)cin >> S[i];
    comb(0);
    for(int i = 1; i < 2000001; i++){
        if(!visited[i]){
            cout << i;
            return 0;
        }
    }
}