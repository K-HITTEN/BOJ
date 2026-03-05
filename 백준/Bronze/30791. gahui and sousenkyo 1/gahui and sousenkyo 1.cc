#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, tmp, cnt = 0;
    cin >> N;
    for(int i = 0; i < 4; i++){
        cin >> tmp;
        if(N-tmp<=1000)cnt++;
    }
    cout << cnt;
}