#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v;
int arr[10001];

int main(void){
    fastio;
    int T, N, M;
    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> N;
        v.resize(N);
        for(int i = 0; i < N; i++)cin >> v[i];
        cin >> M;
        fill(arr,arr+10001,0);
        sort(v.begin(),v.end());
        arr[0] = 1;
        for(int i = 0; i < N; i++){
            for(int j = v[i]; j <= M; j++){
               arr[j] += arr[j-v[i]]; 
            }
        }
        cout << arr[M] << "\n";
    }
}