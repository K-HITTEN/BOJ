#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[51];
priority_queue<pair<int,int>> pq;

int main(void){
    fastio;
    int N, max_idx = 1, max_value, result = 0;
    cin >> N;
    cin >> arr[1];
    max_value = arr[1];
    for(int i = 2; i <= N; i++){
        cin >> arr[i];
        pq.push({arr[i],i});
        if(arr[i]>= max_value){
            max_idx = i;
            max_value = arr[i];
        }
    }
    if(max_idx == 1){
        cout << result;
        return 0;
    }
    while(true){
        result++;
        pair<int,int> tmp = pq.top();
        pq.pop();
        arr[1]++;
        arr[tmp.second]--;
        pq.push({arr[tmp.second],tmp.second});
        max_idx = 1;
        max_value = arr[1];
        for(int i = 2; i <= N; i++){
            if(arr[i]>= max_value){
                max_idx = i;
                max_value = arr[i];
            }
        }
        if(max_idx == 1){
            cout << result;
            return 0;
        }
    }
}