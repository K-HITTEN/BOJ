#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, V, E;
    cin >> T;
    while(T--){
        cin >> V >> E;
        cout << 2-V+E << '\n';
    }
}