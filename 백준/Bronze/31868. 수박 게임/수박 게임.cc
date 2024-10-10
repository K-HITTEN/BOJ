#include<iostream>
#include<cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, K;
    cin >> N >> K;
    cout << (int)(K/pow(2,N-1));
}