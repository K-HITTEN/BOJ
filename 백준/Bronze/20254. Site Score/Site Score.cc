#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int  Ur,Tr,Uo,To;
    cin >> Ur >> Tr >> Uo >> To;
    cout << 56*Ur + 24*Tr + 14*Uo + 6*To;
}