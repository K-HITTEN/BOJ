#include <iostream>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    int cnt = 0;
    while(getline(cin,s))cnt++;
    cout << cnt;
}