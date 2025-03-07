#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string a,b;
    int x,y;
    cin >> a >> b;
    x = abs((int)(a[0]-b[0]));
    y = abs(a[1]-b[1]);
    cout << min(x,y) << ' ' << max(x,y);
}