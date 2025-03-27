#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, tmp;
    cin >> N;
    for(int i = 0; i < 9; i++){
        cin >> tmp;
        N-=tmp;
    }
    cout << N;
}