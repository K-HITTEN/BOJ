#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    int a, b;
    while(true){
        cin >> s >> a >> b;
        if(s=="#"&&a==0&&b==0)return 0;
        cout << s;
        if(a>17||b>=80)cout<<" Senior\n";
        else cout<<" Junior\n";
    }
}