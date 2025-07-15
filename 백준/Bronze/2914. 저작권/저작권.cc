#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A, I, ret, tmp;
    cin >> A >> I;
    tmp = ret = A*I;
    while(true){
        if(--tmp%A)ret = tmp;
        else break;
    }
    cout << ret;
}