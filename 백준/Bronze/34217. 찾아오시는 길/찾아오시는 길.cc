#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if(A+C<B+D)cout << "Hanyang Univ.";
    else if(A+C>B+D)cout << "Yongdap";
    else cout << "Either";
}