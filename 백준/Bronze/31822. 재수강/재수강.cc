#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, cnt = 0;
    string s, tmp, _s, _tmp;
    cin >> s >> N;
    _s = s.substr(0,5);
    while(N--){
        cin >> tmp;
        _tmp = tmp.substr(0,5);
        if(_tmp==_s)cnt++;
    }
    cout << cnt;
}