#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int ret;

bool calc(int X,int Y,int x,int y,int r){
    if(sqrt(pow(X-x,2) + pow(Y-y,2)) <= r)return true;
    else return false;
}

int main(void){
    fastio;
    int T, x1, y1, x2, y2, n, x3, y3, r;
    cin >> T;
    while(T--){
        cin >> x1 >> y1 >> x2 >> y2 >> n;
        ret = 0;
        for(int i = 0; i < n; i++){
            cin >> x3 >> y3 >> r;
            if((calc(x1,y1,x3,y3,r)&&calc(x2,y2,x3,y3,r))||(!calc(x1,y1,x3,y3,r)&&!calc(x2,y2,x3,y3,r)))continue;
            ret++;
        }
        cout << ret << '\n';
    }
}