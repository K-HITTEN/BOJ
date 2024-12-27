#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, G, C, E;
    cin >> T;
    while(T--){
        cin >> G >> C >> E;
        if(E<=C)cout << 0;
        else if(G==1)cout << E-C;
        else if(G==2)cout << 3*(E-C);
        else cout << 5*(E-C);
        cout << "\n";
    }
}