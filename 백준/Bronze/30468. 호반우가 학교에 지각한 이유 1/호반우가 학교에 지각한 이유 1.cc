#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int STR, DEX, INT, LUK, N, total, cnt = 0;
    cin >> STR >> DEX >> INT >> LUK >> N;
    total = STR + DEX + INT + LUK;
    while(true){
        if(total/4<N){
            cnt++;
            total++;
        }else {
            cout << cnt;
            return 0;
        }
    }
}