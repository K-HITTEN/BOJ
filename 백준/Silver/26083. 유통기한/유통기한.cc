#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool calc(int year,int month, int day){
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(day<=31)return true;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if(day<=30)return true;
            break;
        case 2:
            if(year%4==0&&day<=29)return true;
            else if(day<=28)return true;
    }
    return false;
}

bool calc2(int Y, int M, int D, int A, int B, int C) {
    if (A > Y) return true;
    if (A == Y) {
        if (B > M) return true;
        if (B == M) {
            return C >= D;
        }
    }
    return false;
}


int main(void){
    fastio;
    int Y, M, D, N, A, B, C;
    cin >> Y >> M >> D >> N;
    for(int i = 0; i < N; i++){
        cin >> A >> B >> C;
        int count = 0, count2 = 0;
        if(B<=12 && B>0){
            if(calc(A,B,C) && C != 0){
                count++;
                if(calc2(Y,M,D,A,B,C))count2++;
            }
            if(calc(C,B,A) && A != 0){
                count++;
                if(calc2(Y,M,D,C,B,A))count2++;
            }
        }
        if(A<=12 && A>0){
            if(calc(C,A,B) && B != 0){
                count++;
                if(calc2(Y,M,D,C,A,B))count2++;
            }
        }
        if(count==0)cout << "invalid\n";
        else if(count2 == count)cout << "safe\n";
        else cout << "unsafe\n";
    }
}