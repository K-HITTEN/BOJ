#include<iostream>

using namespace std;

int N, x, y, z, a, b, c, _a, _b, _c, ret;
bool ans[1001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 123; i <= 987; i++){
        a = i/100;
        b = (i/10)%10;
        c = i%10;
        if(a == b || b == c || a == c|| b == 0 || c == 0)ans[i] = true;
        else ret++;
    }
    cin >> N;
    while(N--){
        cin >> x >> y >> z;
        a = x/100;
        b = (x/10)%10;
        c =  x%10;
        for(int i = 123; i <= 987; i++){
            if(ans[i])continue;
            _a = i/100;
            _b = (i/10)%10;
            _c = i%10;
            int _y = 0, _z = 0;
            if(a == _a)_y++;
            else if(a == _b || a == _c)_z++;
            if(b == _b)_y++;
            else if(b == _a || b == _c)_z++;
            if(c == _c)_y++;
            else if(c == _a || c == _b)_z++;
            if(!(y==_y&&z==_z)){
                ans[i] = true;
                ret--;
            }
        }
    }
    cout << ret;
}