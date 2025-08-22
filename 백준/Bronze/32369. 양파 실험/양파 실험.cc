#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, A, B, a = 1, b =1;
    cin >> N >> A >> B;
    while(N--){
        a += A;
        b += B;
        if(a < b)swap(a,b);
        else if(a == b)b--;
    }
    cout << a << ' ' << b;
}