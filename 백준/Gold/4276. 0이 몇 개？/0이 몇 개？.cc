#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long result = 0;

void calc(long long n, long long t){
    while(n>0){
        if(n%10 == 0) result += t;
        n/=10;
    }
}

int main(void){
    fastio;
    long long B, A, pos = 1;
    while(true){
        result = 0;
        pos = 1;
        cin >> A >> B;
        if(A < 0)break;
        if(A == 0){
            A = 10;
            result++;
        }
        while(A<=B){
            while(A%10!=0 && A<=B){
                calc(A,pos);
                A++;
            }
            if(A>B||(A==B&&B==0))break;
            while(B%10!=9 && A<=B){
                calc(B,pos);
                B--;
            }
            A/=10;
            B/=10;
            result += (B-A+1)*pos;
            pos *=10;
        }
        cout << result<< "\n";
    }
}