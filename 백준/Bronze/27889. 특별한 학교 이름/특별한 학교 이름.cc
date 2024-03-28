#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    cin >> s;
    switch(s[0]){
        case 'N' : cout << "North London Collegiate School";break;
        case 'B' : cout << "Branksome Hall Asia";break;
        case 'K' : cout << "Korea International School";break;
        case 'S' : cout << "St. Johnsbury Academy";
    }
}