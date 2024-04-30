#include <iostream>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, arr[26];

int main(void){
    fastio;
    cin >> N;
    string s;
    for(int i = 0; i < N; i++){
        cin >> s;
        int t = 1;
        for(int j = s.size()-1; j>=0; j--){
            int tmp = (int)s[j] - 65;
            arr[tmp] += t;
            t *= 10;
        }
    }
    sort(arr,arr+26,greater<int>());
    int tmp = 9, result = 0;
    for(int i = 0; i <26; i++){
        if(arr[i] == 0)break;
        result += arr[i]*tmp;
        tmp--;
    }
    cout << result;
}