#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, N;
    cin >> T;
    while(T--){
        cin >> N;
        if(!((N+1)%(N%100)))cout << "Good\n";
        else cout << "Bye\n";
    }
}