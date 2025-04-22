#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int x, N;
    cin >> x >> N;
    while(N--){
        if(x%2)x=(2*x)^6;
        else x=(x/2)^6;
    }
    cout << x;
}