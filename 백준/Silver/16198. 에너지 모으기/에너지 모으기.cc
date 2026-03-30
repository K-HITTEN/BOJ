#include<iostream>

using namespace std;

int N, arr[10], ret;
bool check[10];

void backtracking(int cnt, int sum){
    if(cnt == N-2){
        ret = max(ret, sum);
        return;
    }
    for(int i = 1; i < N-1; i++){
        if(check[i])continue;
        int idx = i-1, tmp;
        while(check[idx])idx--;
        tmp = arr[idx];
        idx = i+1;
        while(check[idx])idx++;
        tmp *= arr[idx];
        check[i] = true;
        backtracking(cnt+1, sum+tmp);
        check[i] = false;
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++)cin >> arr[i];
    backtracking(0, 0);
    cout << ret;
}