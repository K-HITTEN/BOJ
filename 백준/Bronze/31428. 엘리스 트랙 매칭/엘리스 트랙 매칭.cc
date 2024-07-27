#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, C = 0, S = 0, I = 0, A = 0;
    char c;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> c;
        switch(c){
            case 'C':
                C++;
                break;
            case 'S':
                S++;
                break;
            case 'I':
                I++;
                break;
            case 'A':
                A++;
                break;
        }
    }
    cin >> c;
    switch(c){
        case 'C':
            cout << C;
            break;
        case 'S':
            cout << S;
            break;
        case 'I':
            cout << I;
            break;
        case 'A':
            cout << A;
            break;
    }
}