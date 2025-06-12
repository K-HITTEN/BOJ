#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

stack<char> ls, rs;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    char c;
    int M;
    cin >> s;
    for(int i = 0; i < s.length(); i++)ls.push(s[i]);
    cin >> M;
    while(M--){
        cin >> c;
        if(c=='P'){
            cin >> c;
            ls.push(c);
        }
        else if(c=='L'){
            if(!ls.empty()){
                rs.push(ls.top());
                ls.pop();
            }
        }
        else if(c=='D'){
            if(!rs.empty()){
                ls.push(rs.top());
                rs.pop();
            }
        }
        else{
            if(!ls.empty())ls.pop();
        }
    }
    s = "";
    while(!ls.empty()){
        s+=ls.top();
        ls.pop();
    }
    reverse(s.begin(),s.end());
    while(!rs.empty()){
        s+=rs.top();
        rs.pop();
    }
    cout << s;
}