#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A, C, E, a, c, e;
    cin >> A >> C >> E >> a >> c >> e;
    if(a>=A&&c>=C)cout << 'A';
    else if(c>=C&&a>=(A+1)/2)cout << 'B';
    else if(c>=C)cout << 'C';
    else if(c>=(C+1)/2)cout << 'D';
    else cout << 'E';
}