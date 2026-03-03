#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int n, num;
    bool tmp, ans = true;
    cin >> n;
    for(int i = 0; i < 3; i++){
        tmp = false;
        for(int j = 0; j < n; j++){
            cin >> num;
            if(num == 7)tmp = true;
        }
        if(!tmp)ans = false;
    }
    if(ans)cout << 777;
    else cout << 0;
}