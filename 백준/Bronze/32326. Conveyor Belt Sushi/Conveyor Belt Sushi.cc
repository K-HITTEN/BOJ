#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int R,G,B;
    cin >> R >> G >> B;
    cout << R*3+G*4+B*5;
}