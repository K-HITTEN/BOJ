#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    cin >> N;
    if(N<100001&&N%2024==0)cout << "Yes";
    else cout << "No";
}