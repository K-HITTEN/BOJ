#include<iostream>

using namespace std;

int main(void){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int S, A, B;
    cin >> S >> A >> B;
    if(S<=A)cout << 250;
    else {
        if((S-A)%B)cout << 250+100*((S-A)/B+1);
        else cout << 250+100*((S-A)/B);
    }
}