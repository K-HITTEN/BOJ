#include<iostream>

using namespace std;

int tmp, sum = 0, ret = 0;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 0; i < 4; i++){
        cin >> tmp;
        sum -= tmp;
        cin >> tmp;
        sum += tmp;
        ret = max(ret, sum);
    }
    cout << ret;
}