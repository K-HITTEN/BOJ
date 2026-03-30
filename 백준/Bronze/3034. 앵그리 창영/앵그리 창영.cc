#include<iostream>
#include<cmath>

using namespace std;

double A,B,C,N,tmp;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> A >> B;
    C = sqrt(A*A+B*B);
    while(N--){
        cin >> tmp;
        if(tmp<=A||tmp<=B||tmp<=C)cout << "DA\n";
        else cout << "NE\n";
    }
}