#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    cin >> s;
    switch(s[0]){
        case 'S': 
            cout << "HIGHSCHOOL";
            break;
        case 'C':
            cout << "MASTER";
            break;
        case '2':
            cout << "0611";
            break;
        case 'A':
            cout << "CONTEST";
    }
}