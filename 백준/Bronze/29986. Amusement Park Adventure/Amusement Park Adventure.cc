#include<iostream>

using namespace std;

int N, A, tmp, cnt;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> A;
    while(N--){
        cin >> tmp;
        if(tmp>A)continue;
        else cnt++;
    }
    cout << cnt;
}