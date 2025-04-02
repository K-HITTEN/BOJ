#include<iostream>
#include<algorithm>

using namespace std;

int arr[51], goods[10001];
bool visited[10001], checked[51];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M, t = 0, idx = 0, tmp = 0, num = 0;
    cin >> N;
    for(int i = 0; i < N; i++)cin >> arr[i];
    sort(arr,arr+N,greater<int>());
    cin >> M;
    for(int i = 0; i < M; i++)cin >> goods[i];
    sort(goods,goods+M,greater<int>());
    while(true){
        t++;
        for(int i = 0; i < N; i++){
            if(checked[i])continue;
            int temp = num;
            for(int j = temp; j < M; j++){
                if(visited[num])num++;
                else break;
            }
            for(int j = num; j < M; j++){
                if(visited[j])continue;
                if(arr[i]>=goods[j]){
                    visited[j] = true;
                    tmp++;
                    break;
                }else if(j==M-1){
                    checked[i] = true;
                    idx++;
                }
            }
        }
        if(idx == N||tmp == M||!visited[0])break;
    }
    if(visited[0])cout << t;
    else cout << -1;
}