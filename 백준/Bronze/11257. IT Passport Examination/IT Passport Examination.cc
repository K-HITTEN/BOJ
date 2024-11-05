#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, a, b, c;
    string s;
    cin >> T;
    while(T--){
        cin >> s >> a >> b >> c;
        cout << s << " "<< a+b+c;
        if(a+b+c<55) cout << " FAIL\n";
        else{
            if(a<35*0.3||b<25*0.3||c<40*0.3)cout<< " FAIL\n";
            else cout << " PASS\n";
        }
    }
}