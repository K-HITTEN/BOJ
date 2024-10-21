#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int X, Y;
    cin >> X >> Y;
    for(int i = X; i <=Y; i+=60){
        cout << "All positions change in year "<<i<<"\n";
    }
}