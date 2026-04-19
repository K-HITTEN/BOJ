#include<iostream>

using namespace std;

int N, ans;
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> s;
    for(int i = 0; i < N; i++){
        if(s[i]=='j'||s[i]=='i')ans+=2;
        else if(s[i] =='o')ans++;
    }
    cout << ans;
}