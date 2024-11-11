#include<iostream>

using namespace std;

int arr[11][11], src[11], N, K, ret = 100001;
bool visited[11];

void perm(int srcIdx){
    if(srcIdx==N){
        int sum = 0;
        for(int i = 1; i < N; i++){
            sum += arr[src[i-1]][src[i]];
        }
        ret = min(ret,sum);
        return;
    }
    for(int i = 0; i < N; i++){
        if(!visited[i]){
            visited[i] = true;
            src[srcIdx] = i;
            perm(srcIdx+1);
            visited[i] = false;
        }
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }
    for(int k = 0; k < N; k++){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(i==j||i==k||k==j)continue;
                arr[i][j] = min(arr[i][j],arr[i][k]+arr[k][j]);
            }
        }
    }
    src[0] = K;
    visited[K] = true;
    perm(1);
    cout << ret;
}