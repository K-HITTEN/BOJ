#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int cnt = 0, N, tmp, T = 5;
    cin >> N;
    while(T--){
        cin >> tmp;
        if(N==tmp)cnt++;
    }
    cout << cnt;
}