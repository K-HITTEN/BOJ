#include<iostream>
#include<algorithm>

using namespace std;

int ret[7], arr[9];
bool visited[9];

void calc(int idx, int cnt, int sum){
    if(sum > 100|| idx > 9)return;
    if(cnt == 7){
        if(sum<100)return;
        int j = 0;
        for(int i = 0; i < idx; i++){
            if(visited[i]){
                ret[j] = arr[i];
                j++;
            }
        }
        return;
    }
    visited[idx] = true;
    calc(idx+1,cnt+1,sum+arr[idx]);
    visited[idx] = false;
    calc(idx+1,cnt,sum);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 0; i < 9; i++)cin >> arr[i];
    sort(arr,arr+9);
    calc(0,0,0);
    for(int i = 0; i < 7; i++)cout << ret[i] << "\n";
}