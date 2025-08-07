#include<iostream>

using namespace std;

int dp[21][21][21], a, b, c, ret;

int w(int A, int B, int C){
    if(A<=0||B<=0||C<=0)return 1;
    if(A>20||B>20||C>20)return w(20,20,20);
    if(dp[A][B][C])return dp[A][B][C];
    if(A<B&&B<C)return dp[A][B][C] = w(A,B,C-1) + w(A,B-1,C-1) - w(A,B-1,C);
    else return dp[A][B][C] = w(A-1,B,C) + w(A-1,B-1,C) + w(A-1,B,C-1) - w(A-1,B-1,C-1); 
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    while(true){
        cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1)break;
        ret = w(a,b,c);
        cout << "w(" << a << ", " << b << ", " << c << ") = " << ret << "\n";
    }
}