#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    cout << abs(A+B+C+D-(max({A,B,C,D})+min({A,B,C,D}))*2);
}