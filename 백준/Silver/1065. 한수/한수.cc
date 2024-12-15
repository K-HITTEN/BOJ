#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, res = 99;
    cin >> N;
    if(N<100)cout << N;
    else {
        for(int i = 100; i <= N; i++){
            int 백 = i/100,십 = (i/10)%10,일= i%10;
            if((백-십)==(십-일))res++;
        }
        cout << res;
    }
}