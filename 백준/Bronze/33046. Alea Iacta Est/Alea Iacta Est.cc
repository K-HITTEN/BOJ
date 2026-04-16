#include <iostream>

using namespace std;

int A, B, C, D;

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    cin >> A >> B >> C >> D;
    cout << ((((A + B - 1) % 4) + C + D - 1) % 4) + 1;
}