#include<iostream>

using namespace std;

char arr[101][101], tmp;
int N, M, cnt = 0;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> tmp;
            if(tmp == arr[i][j])cnt++;
        }
    }
    cout << cnt;
}