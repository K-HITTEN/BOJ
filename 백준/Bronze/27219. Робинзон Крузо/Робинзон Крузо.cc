#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    cin >> N;
    for(int i = 0; i < (N/5); i++){
        cout << "V";
    }
    for(int i = 0; i < (N%5); i++){
        cout << "I";
    }
}