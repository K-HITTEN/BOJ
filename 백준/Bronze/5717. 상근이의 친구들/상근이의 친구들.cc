#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int M, F;
    while(true){
        cin >> M >> F;
        if(M+F == 0)break;
        else cout << M+F << '\n';
    }
}