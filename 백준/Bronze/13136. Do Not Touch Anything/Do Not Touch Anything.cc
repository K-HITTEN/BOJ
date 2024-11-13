#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    long long r, c, n, x, y;
    cin>>r>>c>>n;
    x = r/n;
    if(r%n)x++;
    y = c/n;
    if (c%n)y++;
    cout<<x*y;
}