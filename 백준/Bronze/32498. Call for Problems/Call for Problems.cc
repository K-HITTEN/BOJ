#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp, cnt = 0;
    cin >> N;
    while(N--){
        cin >> tmp;
        if(tmp%2)cnt++;
    }
    cout << cnt;
}