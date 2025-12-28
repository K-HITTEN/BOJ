#include<iostream>

using namespace std;

long long ret;
string a, b;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> a >> b;
    for(int i = 0; i < a.length(); i++){
        for(int j = 0; j < b.length(); j++){
            ret += (a[i]-'0')*(b[j]-'0');
        }
    }
    cout << ret;
}