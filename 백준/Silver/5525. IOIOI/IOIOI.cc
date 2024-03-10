#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

string P = "IOI";

int main(void){
    fastio;
    int N, M, count = 0;
    string S;
    cin >> N >> M >> S;
    for(int i = 0; i < M; i++){
        if (S[i] == 'O') continue;
        int IOI = 0;
        while(S[i+1] == 'O' && S[i+2] == 'I'){
            IOI++;
            if(IOI == N){
                count++;
                IOI--;
            }
            i+=2;
        }
    }
    cout << count;
}