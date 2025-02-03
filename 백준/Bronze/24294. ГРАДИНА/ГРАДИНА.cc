#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    cout << 4+2*max(w1,w2)+2*(h1+h2);
}