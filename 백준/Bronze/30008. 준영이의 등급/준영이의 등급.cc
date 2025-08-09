#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, K, P, tmp;
    cin >> N >> K;
    while(K--){
        cin >> tmp;
        P = tmp*100/N;
        if(P<=4)cout << 1;
        else if(P<=11)cout << 2;
        else if(P<=23)cout << 3;
        else if(P<=40)cout << 4;
        else if(P<=60)cout << 5;
        else if(P<=77)cout << 6;
        else if(P<=89)cout << 7;
        else if(P<=96)cout << 8;
        else cout << 9;
        cout << " ";
    }
}