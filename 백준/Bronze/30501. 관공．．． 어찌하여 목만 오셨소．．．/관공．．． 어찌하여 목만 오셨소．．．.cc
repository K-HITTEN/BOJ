#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    string s;
    cin >> N;
    bool FLAG = false;
    for(int i = 0; i < N; i++){
        cin >> s;
        if(FLAG)continue;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == 'S'){
                FLAG = true;
                cout << s;
                break;
            }
        }
    }
}