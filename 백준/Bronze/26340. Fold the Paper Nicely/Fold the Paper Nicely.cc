#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, a,b,c;
    cin >> T;
    while(T--){
        cin >> a >> b >> c;
        cout << "Data set: " << a << " " << b << " " << c << "\n";
        while(c--){
            if(a>b)a/=2;
            else b/=2;
        }
        cout << max(a,b) << " " << min(a,b) << "\n\n";
    }
}