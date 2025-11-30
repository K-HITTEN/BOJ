#include<iostream>

using namespace std;

int T, N, arr[21], idx, val;
string s[21];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        cin >> N;
        idx = val = -1;
        for(int i = 0; i < N; i++){
            cin >> s[i] >> arr[i];
            if(arr[i] > val){
                val = arr[i];
                idx = i;
            }
        }
        cout << s[idx] << '\n';
    }
}