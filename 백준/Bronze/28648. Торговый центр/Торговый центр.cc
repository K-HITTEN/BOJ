#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, t, l, ret = 201;
    cin >> N;
    while(N--){
        cin >> t >> l;
        ret = min(ret, t+l);
    }
    cout << ret;
}