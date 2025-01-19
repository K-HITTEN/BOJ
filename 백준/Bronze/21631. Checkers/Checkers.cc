#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    long long a,b;
    cin >> a >> b;
    cout << min(a+1,b);
}