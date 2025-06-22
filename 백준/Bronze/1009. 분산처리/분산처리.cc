#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, a, b, ret;
    cin >> T;
    while(T--){
        cin >> a >> b;
        ret = 1;
        for(int i = 0; i < b; i++)ret=(ret*a)%10;
        if(!ret)cout << 10 << "\n";
        else cout << ret << "\n";
    }
}