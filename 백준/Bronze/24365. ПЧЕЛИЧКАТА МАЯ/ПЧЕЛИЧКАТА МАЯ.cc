#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A, B, C, avg;
    cin >> A >> B >> C;
    avg = (A+B+C)/3;
    cout << avg-A+avg-B+avg-A;
}