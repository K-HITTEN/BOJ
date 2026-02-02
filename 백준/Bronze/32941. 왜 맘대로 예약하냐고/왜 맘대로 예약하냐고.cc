#include<iostream>

using namespace std;

int T, X, N, K, k;
bool FLAG = true, flag;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T >> X >> N;
    while(N--){
        cin >> K;
        flag = false;
        while(K--){
            cin >> k;
            if(k == X)flag = true;
        }
        if(!flag)FLAG = false;
    }
    if(FLAG)cout << "YES";
    else cout << "NO";
}