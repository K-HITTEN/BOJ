#include<iostream>

using namespace std;

int N, tmp;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> tmp;
        tmp %= 25;
        if(tmp < 17)cout << "ONLINE\n";
        else cout << "OFFLINE\n";
    }
}