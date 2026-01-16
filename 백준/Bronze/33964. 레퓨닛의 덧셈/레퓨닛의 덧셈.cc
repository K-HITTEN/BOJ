#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int X, Y;
    cin >> X >> Y;
    for(int i = 0; i < abs(X-Y); i++)cout << 1;
    for(int i = 0; i < min(X,Y); i++)cout << 2;
}