#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int L, P, V, t = 1;
    while(true){
        cin >> L >> P >> V;
        if(!L&&!P&&!V)break;
        else cout << "Case " << t << ": " << V/P*L+min(V%P,L) << '\n';
        t++;
    }
}