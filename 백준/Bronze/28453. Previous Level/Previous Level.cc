#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(tmp>=300)cout << 1 << " ";
        else if(tmp>=275)cout << 2 << " ";
        else if(tmp>=250)cout << 3 << " ";
        else cout << 4 << " ";
    }
}