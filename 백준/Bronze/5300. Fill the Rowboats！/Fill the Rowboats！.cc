#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cout << i << " ";
        if(i%6==0)cout << "Go! ";
    }
    if(N%6!=0)cout << "Go! ";
}