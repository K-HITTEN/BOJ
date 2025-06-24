#include<iostream>
#include<cmath>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while(T--){
        long long x, y;
        cin >> x >> y;
        double dist = y-x, dpw = sqrt(dist);
        int pw = round(dpw);
        if(dpw<=pw)cout << pw*2-1 << "\n";
        else cout << pw*2 << "\n";
    }
}