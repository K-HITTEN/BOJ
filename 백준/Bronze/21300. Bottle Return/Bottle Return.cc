#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int tmp, sum = 0;
    for(int i = 0; i < 6; i++){
        cin >> tmp;
        sum += (tmp*5);
    }
    cout << sum;
}