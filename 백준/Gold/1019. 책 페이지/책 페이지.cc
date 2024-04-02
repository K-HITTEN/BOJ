#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long arr[10] = {0,};

void calc(long long n, long long t){
    while(n>0){
        arr[n%10] += t;
        n/=10;
    }
}

int main(void){
    fastio;
    long long B, A = 1, pos = 1;
    cin>> B;
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
        long long tmp = (B-A+1)*pos;
        for(int i = 0; i < 10; i++)arr[i]+= tmp;
        pos *=10;
    }
    for(int i = 0; i < 10; i++)cout<< arr[i] << " ";
}