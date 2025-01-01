#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int a,x,b,y,T;
    cin >> a >> x >> b >> y >> T;
    cout << a+max(0,T-30)*x*21 << " " << b+max(0,T-45)*y*21;
}