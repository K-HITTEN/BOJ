#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, M;
    cin >> N >> M;
    if(N>=M)cout << "Congratulations, you are within the speed limit!";
    else {
        cout << "You are speeding and your fine is $";
        if(M-N<=20)cout << 100;
        else if(M-N<=30)cout<< 270;
        else cout << 500;
        cout << '.';
    }
}