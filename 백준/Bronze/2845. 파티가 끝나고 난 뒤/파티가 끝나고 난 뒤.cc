#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int L, P, tmp;
    cin >> L >> P;
    for(int i = 0; i < 5; i++){
        cin >> tmp;
        cout << tmp-L*P << " ";
    }
}