#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int calc(int x, int t){
    if(x<t*10)return x;
    int k = x/t;
    k %= 10;
    x -= (k*t);
    if(k>=5){
        x += (t*10);
    }
    return calc(x,t*10);
}

int main(void){
    fastio;
    int N, x;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> x;
        cout << calc(x,1) << "\n";
    }    
}