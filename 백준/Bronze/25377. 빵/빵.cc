#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, A, B, ret = -1;
    cin >> N;
    while(N--){
        cin >> A >> B;
        if(A>B)continue;
        if(ret == -1)ret = B;
        else ret = min(ret,B);
    }
    cout << ret;
}