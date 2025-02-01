#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    string S;
    cin >> N >> S;
    for(int i = 1; i < N; i++){
        if(S[i] == 'J')cout << S[i-1] << '\n';
    }
}