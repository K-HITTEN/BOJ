#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, a = 2024, b = 1;
    cin >> N;
    b+=7*N;
    a+=(b/12);
    b%=12;
    if(b==0){
        b = 12;
        a--;
    }
    cout << a << ' ' << b;
}