#include <iostream>

using namespace std;

long long A, B;
int result=987654321;

void search(long long _A,int  idx){
    if(idx>=result)return;
    if(_A == B){
        result = min(idx+1,result);
    }
    if(_A>B)return;
    search((_A*10)+1,idx+1);
    search(_A*2,idx+1);
}

int main(void){
    cin >> A >> B;
    search(A,0);
    if(result == 987654321)cout << -1;
    else cout << result;
}