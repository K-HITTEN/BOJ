#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int Ds, Ys, Dm, Ym, S, M;
    cin >> Ds >> Ys >> Dm >> Ym;
    S = Ys-Ds;
    M = Ym-Dm;
    while(S!=M){
        if(S<M)S+=Ys;
        else M += Ym;
    }
    cout << S;
}