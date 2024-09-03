#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    cin >> N;
    switch(N){
        case 1 :
            cout << 11 << "\nA B C D E F G H J L M";
            break;
        case 2 :
        case 3 :
            cout << 9 << "\nA C E F G H I L M";
            break;
        case 4 :
            cout << 9 << "\nA B C E F G H L M";
            break;
        case 5 :
        case 6 :
        case 7 :
        case 8 :
        case 9 :
            cout << 8 << "\nA C E F G H L M";
            break;
        case 10 :
            cout << 8 << "\nA B C F G H L M";
    }
}