#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, tmp, n;
    while(cin >> N){
        n = tmp = 1;
        while(true){
            if(!(n%N))break;
            tmp++;
            n *= 10;
            n++;
            n %= N;
        }
        cout << tmp << '\n';
    }
}