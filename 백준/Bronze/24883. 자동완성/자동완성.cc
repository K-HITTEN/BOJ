#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    char c;
    cin >> c;
    if(c=='n'||c=='N')cout << "Naver D2";
    else cout << "Naver Whale";
}