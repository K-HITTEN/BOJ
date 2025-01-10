#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 5*N; j++)cout<<'@';
        cout << "\n";
    }
    for(int i = 0; i < 4*N; i++){
        for(int j = 0; j < N; j++)cout<<'@';
        cout << "\n";
    }
}