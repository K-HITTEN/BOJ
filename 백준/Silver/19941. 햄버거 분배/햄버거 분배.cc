#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, K, ret = 0;
    string s;
    cin >> N >> K >> s;
    for(int i = 0; i < N; i++){
        if(s[i]!='P')continue;
        for(int j = i-K; j <=i+K; j++){
            if(j<0||j>=N)continue;
            if(s[j]=='H'){
                s[j]=' ';
                ret++;
                break;
            }
        }
    }
    cout << ret;
    
}