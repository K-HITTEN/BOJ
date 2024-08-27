#include <iostream>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void) {
    fastio;
    string s;
    while(true) {
        getline(cin, s);
        if (cin.eof()) break;
        cout << s << "\n";
    }
}