#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long result = 0;

void calc(long long n, long long t){
    while(n>0){
        result += (n%2)*t;
        n/=2;
    }
}

int main(void){
    fastio;
    long long B, A, pos = 1;
    cin >> A >> B;
    while(A<=B){
        while(A%2!=0 && A<=B){
            calc(A,pos);
            A++;
        }
        if(A>B||(A==B&&B==0))break;
        while(B%2!=1 && A<=B){
            calc(B,pos);
            B--;
        }
        A/=2;
        B/=2;
        result += (B-A+1)*pos;
        pos *=2;
    }
    cout << result<< "\n";
}