#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M, cnt = 0;
    string s;
    cin >> N >> M;
    while(N--){
        cin >> s;
        if(s.find('+')!=string::npos)cnt++;
    }
    cout << cnt;
}