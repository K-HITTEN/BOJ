#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int A,B,C,a,b,c, sum = 0;
    cin >> A >> B >> C >> a >> b >> c;
    if(A<a)sum+= a-A;
    if(B<b)sum+= b-B;
    if(C<c)sum+= c-C;
    cout << sum;
}