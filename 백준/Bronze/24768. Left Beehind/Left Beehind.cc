#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int x, y;
    while(true){
        cin >> x >> y;
        if(x == 0 && y == 0)break;
        if(x+y == 13)cout << "Never speak again.\n";
        else if(x<y)cout << "Left beehind.\n";
        else if(x==y)cout << "Undecided.\n";
        else cout << "To the convention.\n";
    }
}