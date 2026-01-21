#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    cin >> N;
    if(N>10000)cout << "Time limit exceeded";
    else cout << "Accepted";
}