#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    int res = 0, cnt = 0, in, out;
    for(int i = 0; i < 10; i++){
        cin >> out >> in;
        cnt-=out;
        cnt+=in;
        res = max(res,cnt);
    }
    cout << res;
}