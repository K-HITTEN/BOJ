#include<iostream>

using namespace std;

string s1 = "SciComLove", s2 = "evoLmoCicS";
int N;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    if(N%2)cout << s2;
    else cout << s1;
}