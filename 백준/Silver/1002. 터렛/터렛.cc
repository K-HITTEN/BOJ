#include<iostream>
#include<cmath>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, x1,x2,y1,y2,r1,r2,d,cir1,cir2;
    cin >> T;
    while(T--){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d = pow((x1-x2),2)+pow((y1-y2),2);
        cir1 = pow((r1-r2),2);
        cir2 = pow((r1+r2),2);
        if(d==0){
            if(cir1 == 0)cout << -1 << "\n";
            else cout << 0 << "\n";
        }else if(d == cir1 || d == cir2)cout << 1 << "\n";
        else if(cir1 < d && d < cir2)cout << 2 << "\n";
        else cout << 0 << "\n";
    }
}