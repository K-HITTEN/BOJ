#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, tmp;
    cin >> T;
    for(int i = 1; i <= T; i++){
        cin >> tmp;
        cout << "Case #" << i << ": ";
        if(tmp<26)cout << "World Finals\n";
        else if(tmp<1001)cout << "Round 3\n";
        else if(tmp<4501)cout << "Round 2\n";
        else cout << "Round 1\n";
    }
}