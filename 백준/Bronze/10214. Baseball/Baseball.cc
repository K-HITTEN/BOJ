#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, Y, K, y, k;
    cin >> T;
    while(T--){
        Y = K = 0;
        for(int i = 0; i < 9; i++){
            cin >> y >> k;
            Y += y;
            K += k;
        }
        if(Y>K)cout << "Yonsei\n";
        else if(Y<K)cout << "Korea\n";
        else cout << "Draw\n";
    }
}