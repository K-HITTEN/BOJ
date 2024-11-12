#include<iostream>

using namespace std;

int arr[11][11];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M;
    string s;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> s;
        for(int j = 0; j < M; j++){
            arr[i][j] = s[j] - '0';
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = M-1; j>=0; j--){
            cout << arr[i][j];
        }
        cout << '\n';
    }
}