#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    long long X, Y, Z, l = 0, r = 1000000000, mid, tmp;
    cin >> X >> Y;
    Z = Y*100/X;
    if(Z >= 99){
        cout << -1;
        return 0;
    }
    while(l<=r){
        mid = (l+r)/2;
        tmp = (Y+mid)*100/(X+mid);
        if(Z < tmp)r = mid - 1;
        else l = mid +1;
    }
    cout << l;
}