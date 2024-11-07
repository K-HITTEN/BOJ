#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string S;
    cin >> S;
    cout << ((S[0]&255)-234)*4096+((S[1]&255)-176)*64+(S[2]&255)-127;
}