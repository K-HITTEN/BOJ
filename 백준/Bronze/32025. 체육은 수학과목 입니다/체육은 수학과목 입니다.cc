#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int H, W;
    cin >> H >> W;
    cout << min(H,W)*50;
}