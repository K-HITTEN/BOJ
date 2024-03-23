#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int T,tmp1,tmp2;
    long long sum = 0,_xor = 0; 
    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> tmp1;
        if(tmp1 == 1){
            cin >> tmp2;
            sum += tmp2;
            _xor ^= tmp2;
        }else if(tmp1 == 2){
            cin >> tmp2;
            sum -= tmp2;
            _xor ^= tmp2;
        }else if(tmp1 == 3) cout << sum <<"\n";
        else cout << _xor <<"\n";
    }
}