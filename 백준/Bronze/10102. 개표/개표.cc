#include<iostream>

using namespace std;

int N, A, B;
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> s;
    for(int i = 0; i < N; i++){
        if(s[i]=='A')A++;
        else B++;
    }
    if(A>B)cout << 'A';
    else if(A<B)cout << 'B';
    else cout << "Tie";
}