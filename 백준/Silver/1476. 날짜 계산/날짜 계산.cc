#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int E, S, M, tmp, e, m;
    cin >> E >> S >> M;
    tmp = S;
    while(true){
        if(tmp%15)e=tmp%15;
        else e=15;
        if(tmp%19)m=tmp%19;
        else m=19;
        if(e==E&&m==M){
            cout << tmp;
            return 0;
        }
        tmp+=28;
    }
}