#include<iostream>
#include<cmath>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    int ret = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        int tmp;
        if(s[i]-'0'<10)tmp = (int)(s[i]-'0');
        else tmp = (int)(s[i]-'0')-7;
        ret += tmp*pow(16,s.length()-1-i);
    }
    cout << ret;
}