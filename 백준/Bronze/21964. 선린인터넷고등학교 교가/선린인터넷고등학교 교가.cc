#include<iostream>

using namespace std;

int main(){
    int N;
    string s;
    cin >> N >> s;
    for(int i = N-5; i < N; i++){
        cout << s[i];
    }
}