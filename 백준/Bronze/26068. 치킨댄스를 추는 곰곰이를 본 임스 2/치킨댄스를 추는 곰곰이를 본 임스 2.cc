#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, cnt=0, tmp;
    char c;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 2; j++)cin >> c;
        cin >> tmp;
        if(tmp<=90)cnt++;
    }
    cout << cnt;
}