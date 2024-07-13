#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, D = 0, P = 0;
    char c;
    bool FLAG = false;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> c;
        if (FLAG)continue;
        if(c == 'D')D++;
        else P++;
        if(abs(D-P)>1)FLAG = true;
    }
    cout << D << ":" << P;
}