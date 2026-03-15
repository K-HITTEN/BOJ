#include<iostream>

using namespace std;

string a, b;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> a >> b;
    for(int i = 0; i < a.length(); i++){
        if(a[i]<b[i])cout << b[i];
        else cout << a[i];
    }
}