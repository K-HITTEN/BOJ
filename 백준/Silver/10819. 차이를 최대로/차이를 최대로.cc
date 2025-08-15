#include<iostream>

using namespace std;

int N, arr[9], tgt[9], ret = -987654321;
bool visited[9];

void calc(int idx){
    if(idx==N){
        int sum = 0;
        for(int i = 0; i < N-1; i++){
            sum += abs(tgt[i]-tgt[i+1]);
        }
        ret = max(ret,sum);
        return;
    }
    for(int i = 0; i < N; i++){
        if(visited[i])continue;
        visited[i] = true;
        tgt[i] = arr[idx];
        calc(idx+1);
        visited[i] = false;
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++)cin >> arr[i];
    calc(0);
    cout << ret;
}