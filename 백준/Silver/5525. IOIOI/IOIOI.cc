#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

string P = "IOI";

int main(void){
    fastio;
    int N, M, count = 0;
    string S;
    cin >> N >> M >> S;
    for(int i = 2; i <=N; i++){
        P += "OI";
    }
    for(int i = 0; i < M-(P.length()-1); i++){
        if(S.substr(i,P.length()) == P) count++;
    }
    cout << count;
}