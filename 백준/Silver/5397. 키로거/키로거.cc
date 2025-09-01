#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T;
    string s, ret;
    cin >> T;
    while(T--){
        cin >> s;
        stack<char> lst, rst;
        for(int i = 0; i < s.length(); i++){
            if(s[i]=='-'){
                if(!lst.empty())lst.pop();
            }
            else if(s[i]=='<'){
                if(!lst.empty()){
                    rst.push(lst.top());
                    lst.pop();
                }
            }
            else if(s[i]=='>'){
                if(!rst.empty()){
                    lst.push(rst.top());
                    rst.pop();
                }
            }
            else lst.push(s[i]);
        }
        ret = "";
        while(!lst.empty()){
            ret += lst.top();
            lst.pop();
        }
        reverse(ret.begin(),ret.end());
        while(!rst.empty()){
            ret += rst.top();
            rst.pop();
        }
        cout << ret << "\n";
    }
}