#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int n, i, f;
    cin >> n;
    while(n--){
        cin >> i >> f;
        if((i<2&&f<3)||(i<3&&f<2))cout << "Yes\n";
        else cout << "No\n";
    }
}