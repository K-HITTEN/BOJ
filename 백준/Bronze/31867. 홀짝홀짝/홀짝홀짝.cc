#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, odd = 0, even = 0;
    char c;
    cin >> N;
    while(N--){
        cin >> c;
        if((c-'0')%2)odd++;
        else even++;
    }
    if(even>odd)cout << 0;
    else if(even<odd)cout << 1;
    else cout << -1;
}