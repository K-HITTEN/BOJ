#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio

using namespace std;

int main(void){
    fastio;
    double d;
    char c;
    cin >> c;
    switch(c){
    case 'A':
        d = 4.0;
        break;
    case 'B':
        d = 3.0;
        break;
    case 'C':
        d = 2.0;
        break;
    case 'D':
        d = 1.0;
        break;
    case 'F':
        cout.precision(1);
        cout << fixed << 0.0;
        return 0;
    }
    cin >> c;
    switch(c){
    case '+':
        d += 0.3;
        cout << d;
        break;
    case '0':
        cout.precision(1);
        cout << fixed <<  d;
        break;
    case '-' :
        d -= 0.3;
        cout << d;
    }
}