#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    long long N, idx = 1;
    cin >> N;
    while(N>=idx){
        N-=idx;
        idx++;
    }
    cout << idx-1;
}