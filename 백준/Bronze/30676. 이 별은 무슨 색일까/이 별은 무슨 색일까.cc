#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    cin >> N;
    if(N>=620)cout << "Red";
    else if(N>=590)cout << "Orange";
    else if(N>=570)cout << "Yellow";
    else if(N>=495)cout << "Green";
    else if(N>=450)cout << "Blue";
    else if(N>=425)cout << "Indigo";
    else cout << "Violet";
}