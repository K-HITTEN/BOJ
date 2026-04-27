#include <iostream>
#include <string>

using namespace std;

int n;
string s;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    cin >> n >> s;
    for(int i = 1; i < n; i++){
        if(s[i] != s[i-1]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}