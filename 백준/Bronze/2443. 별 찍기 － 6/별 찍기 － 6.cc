#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < i; j++)cout << " ";
        for(int j = 0; j < 2*N-1-2*i; j++)cout <<"*";
        cout <<"\n";
    }
}