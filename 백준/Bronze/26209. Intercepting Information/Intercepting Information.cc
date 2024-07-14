#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int n;
    bool FLAG = false;
    for(int i = 0; i < 8; i++){
        cin >> n;
        if(!(n == 0 || n == 1))FLAG = true;
    }
    if(FLAG)cout << "F";
    else cout << "S";
}