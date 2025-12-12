#include<iostream>

using namespace std;

int T, s, n, q, p;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        cin >> s >> n;
        while(n--){
            cin >> q >> p;
            s += q*p;
        }
        cout << s << '\n';
    }
}