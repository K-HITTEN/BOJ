#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int first, second;
    while(true){
        cin >>first >> second;
        if(first ==0 && second ==0)break;
        if(first > second)cout << "Yes\n";
        else cout << "No\n";
    }
}