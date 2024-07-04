#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    char c;
    cin >> c;
    switch(c){
        case 'M':
            cout << "MatKor";
            break;
        case 'W':
            cout << "WiCys";
            break;
        case 'C':
            cout << "CyKor";
            break;
        case 'A':
            cout << "AlKor";
            break;
        case '$':
            cout << "$clear";
    }
}