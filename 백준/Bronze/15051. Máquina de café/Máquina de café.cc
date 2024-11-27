#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A,B,C;
    cin >> A >> B >> C;
    cout << min({4*A+2*B,2*A+2*C,2*B+4*C});
}