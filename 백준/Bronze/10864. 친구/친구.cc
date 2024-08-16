#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[1001];

int main(void){
    fastio;
    int N, M, tmp1, tmp2;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2;
        arr[tmp1]++;
        arr[tmp2]++;
    }
    for(int i = 1; i <= N; i++){
        cout << arr[i] <<"\n";
    }
}