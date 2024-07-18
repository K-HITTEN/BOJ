#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s = "WelcomeToSMUPC";
    int N;
    cin >> N;
    cout << s[(N-1)%14];
}