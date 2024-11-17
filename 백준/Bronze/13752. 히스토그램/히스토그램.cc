#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        while(n--)cout<<'=';
        cout << '\n';
    }
}