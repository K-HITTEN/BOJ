#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    cin >> N;
    while(N--){
        int a,b,c,cnt = 0;
        cin >> a >> b >> c;
        cout << a << ' ' << b << ' ' << c <<'\n';
        if(a>=10)cnt++;
        if(b>=10)cnt++;
        if(c>=10)cnt++;
        if(cnt == 0)cout << "zilch\n";
        else if(cnt == 1)cout << "double\n";
        else if(cnt == 2)cout << "double-double\n";
        else cout << "triple-double\n";
        cout << '\n';
    }
}