#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int L, N, x, cnt = 0, ret = 0;
    string s;
    cin >> L >> N;
    while(N--){
        cin >> s >> x;
        if(s == "enter"){
            if(cnt + x > L)ret++;
            else cnt += x;
        }else cnt -= x;
    }
    cout << ret;
}