#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string A,B,C;
    cin >> A >> B >> C;
    cout << stoi(A) + stoi(B) - stoi(C) << "\n" << stoi(A+B)-stoi(C);
}