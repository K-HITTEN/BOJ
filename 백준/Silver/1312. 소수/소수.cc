#include<iostream>

using namespace std;

int a, b, n, ans;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> a >> b >> n;
    for(int i = 0; i <= n; i++){
        ans = a/b;
        a = (a%b)*10;
    }
    cout << ans;
}