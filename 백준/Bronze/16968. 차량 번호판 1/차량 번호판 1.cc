#include<iostream>

using namespace std;

string s;
char c[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'},
d[10] = {'0','1','2','3','4','5','6','7','8','9'};
int ret = 0;

void comb(int stIdx,string st){
    if(stIdx == s.length())ret++;
    else{
        if(s[stIdx] == 'c'){
            for(int i = 0; i < 26; i++){
                if(stIdx != 0 && st[stIdx-1]==c[i])continue;
                comb(stIdx+1,st+c[i]);
            }
        }else{
            for(int i = 0; i < 10; i++){
                if(stIdx != 0 && st[stIdx-1]==d[i])continue;
                comb(stIdx+1,st+d[i]);
            }
        }
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> s;
    comb(0,"");
    cout << ret;
}