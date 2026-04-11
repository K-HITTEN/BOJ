#include<iostream>

using namespace std;
    
int N, sum;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= i; j++)sum += i+j;
    }
    cout << sum;
}