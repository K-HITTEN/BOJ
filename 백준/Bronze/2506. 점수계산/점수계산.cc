#include<iostream>

using namespace std;

int N, ret, cnt, tmp;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> tmp;
        if(tmp)cnt += tmp;
        else cnt = 0;
        ret += cnt;
    }
    cout << ret;
}