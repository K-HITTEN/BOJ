#include<iostream>

using namespace std;

int T, cnt;
string s;

bool recursion(int l, int r){
    cnt++;
    if(l>=r)return true;
    else{
        if(s[l]!=s[r])return false;
        else return recursion(l+1,r-1);
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        cin >> s;
        cnt = 0;
        cout << recursion(0,s.length()-1) << " " << cnt << "\n";
    }
}