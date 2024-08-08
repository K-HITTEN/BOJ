#include <iostream>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool b[4];
int arr[100][3];

int main(void){
    fastio;
    int N, ret = 0;
    cin >> N;
    for(int i = 0; i < N; i++)cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    for(int i = 1; i <= 3; i++){
        fill(b,b+4,false);
        b[i] = true;
        int cnt = 0;
        for(int j = 0; j < N; j++){
            swap(b[arr[j][0]],b[arr[j][1]]);
            if(b[arr[j][2]])cnt++;
        }
        ret = max(ret,cnt);
    }
    cout << ret;
}