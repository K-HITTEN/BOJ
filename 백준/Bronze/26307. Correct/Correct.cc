#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int HH, MM;
    cin >> HH >> MM;
    cout << (HH-9)*60+MM;
}