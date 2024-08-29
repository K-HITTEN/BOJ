#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, M, sum = 0;
string ans = "", s;
vector<string> v;

int main(void){
    fastio;
    cin >> N >> M;
    v.resize(N);
    for(int i = 0; i < N; i++) cin >> v[i];
    for(int i = 0; i < M; i++){
        int arr[26] = {0,}, idx = 0, max_val = 0; 
        for(int j = 0; j < N; j++){
            arr[v[j][i]-'A']++;
        }
        for(int j = 0; j < 26; j++){
            if(arr[j]>max_val){
                idx = j;
                max_val = arr[j];
            }   
        }
        ans += (idx+'A');
        sum += (N-max_val);
    }
    cout << ans << "\n" << sum;
}