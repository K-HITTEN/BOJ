#include<iostream>

using namespace std;

int T, r, e, c;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        cin >> r >> e >> c;
        e -= c;
        if(r<e)cout << "advertise\n";
        else if(r>e)cout << "do not advertise\n";
        else cout << "does not matter\n";
    }
}