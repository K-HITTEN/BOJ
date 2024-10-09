#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int Y, M;
    cin >> Y >> M;
    cout << M+(M-Y);
}