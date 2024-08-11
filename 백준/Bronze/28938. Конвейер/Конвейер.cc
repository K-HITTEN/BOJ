#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp, t = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(tmp == 1)t++;
        else if(tmp == -1)t--;
    }
    if(t == 0)cout <<"Stay";
    else if(t > 0)cout << "Right";
    else cout << "Left";
    
}