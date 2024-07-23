#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int sum=0, tmp;
    for(int i = 0; i < 4; i++){
        cin >> tmp;
        sum+=tmp;
    }
    cout << sum/60 <<"\n"<< sum%60;
}