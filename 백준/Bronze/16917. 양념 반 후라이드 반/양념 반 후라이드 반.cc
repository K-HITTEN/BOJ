#include<iostream>

using namespace std;


int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    if((A<C&&B<C)||(A+B<2*C))cout<<A*X+B*Y;
    else{
        int sum = 0;
        if(X>Y){
            sum = 2*Y*C;
            if(A>2*C) sum +=(X-Y)*2*C;
            else sum += (X-Y)*A;
        }
        else{
            sum = 2*X*C;
            if(B>2*C) sum += (Y-X)*2*C;
            else sum += (Y-X)*B;
        }
        cout << sum;
    }
}