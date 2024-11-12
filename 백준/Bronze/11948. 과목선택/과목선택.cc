#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;
    cout << A+B+C+D-min({A,B,C,D})+max(E,F);
}