#include<iostream>
#include<algorithm>

using namespace std;

int T, N, cnt = 0;
pair<int,int> arr[100001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        cnt = 1;
        cin >> N;
        for(int i = 0; i < N; i++){
            cin >> arr[i].first >> arr[i].second;
        }
        sort(arr, arr+N);
        int rank = arr[0].second;
        for(int i = 1; i < N; i++){
            if(arr[i].second < rank){
                cnt++;
                rank = arr[i].second;
            }
        }
        cout << cnt << "\n";
    }
}