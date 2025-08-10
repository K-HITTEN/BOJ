#include<iostream>

using namespace std;

int N, M, ret = 0, min_val = 10001;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 1; i <= 100; i++){
        if(i*i<N)continue;
        if(i*i>M)break;
        ret += i*i;
        min_val = min(min_val,i*i);
    }
    if(ret)cout << ret << "\n" << min_val;
    else cout << -1;
}