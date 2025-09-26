#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N = 1800, tmp;
    for(int i = 0; i < 4; i++){
        cin >> tmp;
        N -= tmp;
    }
    if(N<300)cout << "No";
    else cout << "Yes";
}