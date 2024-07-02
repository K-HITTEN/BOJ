#include <iostream>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    while(true){
        cin >> s;
        if(s == "END")break;
        int tmp = stoi(s);
        int d = 10;
        while(true){
            if(tmp%d == 0) d *= 10;
            else {
                cout << tmp - (d/10) << "\n";
                break;
            }
        }
    }
}