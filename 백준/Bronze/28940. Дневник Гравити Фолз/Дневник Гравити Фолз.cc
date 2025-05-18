#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int w,h,n,a,b;
    cin >> w >> h >> n >> a >> b;
    if(w<a||h<b)cout << -1;
    else if(n%((w/a)*(h/b)))cout << n/((w/a)*(h/b))+1;
    else cout << n/((w/a)*(h/b));
}