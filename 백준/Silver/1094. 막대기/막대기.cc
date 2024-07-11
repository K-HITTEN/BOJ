#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int X, count = 0;
    cin >> X;
    for(int i = 0; i < 8; i++)if(((1<<i)&X)!=0)count++;
    cout << count;
}