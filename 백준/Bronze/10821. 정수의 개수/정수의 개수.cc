#include<iostream>

using namespace std;

int cnt;
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> s;
    for(int i = 0; i < s.length(); i++)if(s[i]==',')cnt++;
    cout << cnt+1;
}