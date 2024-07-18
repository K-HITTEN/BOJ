#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[100001];

int main(void){
    fastio;
    int N, M, a, b;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> a >> b;
        cout << arr[b] - arr[a-1] << "\n";
    }
}