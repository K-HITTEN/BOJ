#include <iostream>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, M, tmp;
    cin >> N;
    int arr[N];
    for(int i = 0 ; i < N; i++) cin >> arr[i];
    sort(arr,arr+N);
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> tmp;
        if(binary_search(arr,arr+N,tmp)) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}