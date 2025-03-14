#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    while(T--){
        long long t, p;
        cin >> t >> p;
        cout << t-p/7+p/4 << "\n";
    }
}