#include<iostream>
#include<string>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A, B;
    cin >> A >> B;
    string s = to_string(A+B);
    cout << s.length();
}