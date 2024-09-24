#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int ret = 0, N, h, w;

int main(void){
    fastio;
    cin >> N;
    while(N--){
        cin >> h >> w;
        ret = max(ret, h*w);
    }
    cout << ret;
}