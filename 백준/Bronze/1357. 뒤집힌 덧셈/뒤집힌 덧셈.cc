#include<iostream>

using namespace std;

int Rev(int n){
    int x = 0;
    while(n){
        x *= 10;
        x += (n%10);
        n /= 10;
    }
    return x;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int X, Y;
    cin >> X >> Y;
    cout << Rev(Rev(X)+Rev(Y));
}

