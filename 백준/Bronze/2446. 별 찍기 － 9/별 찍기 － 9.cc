#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0);

using namespace std;

int main(void){
    fastio;
    int N;
    cin >> N;
    for(int i = 0; i < N-1; i++){
        for(int j = 0; j < i; j++)cout<< " ";
        for(int j = 1; j <=(N*2-(i*2+1)); j++)cout << "*";
        cout << "\n";
    }
    for(int i = 0; i < N; i++){
        for(int j = 1; j <= N-1-i; j++)cout<< " ";
        for(int j = 1; j <=(i*2+1); j++)cout << "*";
        cout << "\n";
    }
}