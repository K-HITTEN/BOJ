#include<iostream>

using namespace std;

string s;
bool FLAG;
int cnt_0 = 0, cnt_1 = 0;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> s;
    if(s[0]=='0')FLAG = false;
    else FLAG = true;
    for(int i = 0; i < s.length(); i++){
        if(FLAG&&s[i]=='0'){
            FLAG = false;
            cnt_1++;
        }
        else if(!FLAG&&s[i]=='1'){
            FLAG = true;
            cnt_0++;
        }
    }
    if(FLAG)cnt_1++;
    else cnt_0++;
    cout << min(cnt_0,cnt_1);
}