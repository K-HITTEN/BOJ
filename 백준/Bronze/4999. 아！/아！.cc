#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s1,s2;
    cin >> s1 >> s2;
    if(s1.length()>=s2.length())cout << "go";
    else cout << "no";
}