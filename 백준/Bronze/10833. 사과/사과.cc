#include<iostream>

using namespace std;

int N, a, b, sum;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> a >> b;
        sum += b%a;
    }
    cout << sum;
}