#include<iostream>
#include<cmath>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    long long cnt = 0;
    cin >> s;
    reverse(s.begin(),s.end());
    for(int i = 0; i < s.length(); i++){
        cnt += ((long long)s[i]-64)*pow(26,i);
    }
    cout << cnt;
}