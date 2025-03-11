#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int r,c;
    cin >> r >> c;
    cout << (r*c-1)/24200+1;
}