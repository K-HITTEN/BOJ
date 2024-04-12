#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    string s;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s;
        if(s.length()>= 6 && s.length() <=9)cout << "yes\n";
        else cout << "no\n";
    }
}