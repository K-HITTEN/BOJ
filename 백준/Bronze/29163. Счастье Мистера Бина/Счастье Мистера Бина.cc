#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp, odd = 0, even = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(tmp%2==1)odd++;
        else even++;
    }
    if(even>odd)cout<<"Happy";
    else cout << "Sad";
}