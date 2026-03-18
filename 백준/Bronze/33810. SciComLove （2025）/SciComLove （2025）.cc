#include<iostream>

using namespace std;

string s, ans = "SciComLove";
int cnt;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> s;
    for(int i = 0; i < 10; i++){
        if(s[i]!=ans[i])cnt++;
    }
    cout << cnt;
}