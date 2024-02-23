#include<iostream>
#include<string>
#include<vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

string s;
vector<int> v;

int main(void){
    fastio;
    getline(cin,s);
    int tmp = 0, result = 0;
    bool minus = false;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '+' && !minus){
            result += tmp;
            tmp = 0;
        }
        else if(s[i]=='+'&& minus){
            result -= tmp;
            tmp = 0;
        }else if(s[i] == '-' && !minus){
            result += tmp;
            minus = true;
            tmp = 0;
        }else if(s[i]=='-'&& minus){
            result -= tmp;
            tmp = 0;
        }
        else{
            tmp *=10;
            tmp += ((int)s[i]-48);
        }
    }
    if(!minus){
            result += tmp;
    }
    else{
            result -= tmp;
    }
    cout << result;
}
