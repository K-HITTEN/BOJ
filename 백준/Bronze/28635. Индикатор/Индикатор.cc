#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int m,a,b,cnt = 0;
    cin >> m >> a >> b;
    while(true){
        if(a==b){
            cout << cnt;
            return 0;
        }
        a++;
        cnt++;
        if(a>m)a=1;
    }
}