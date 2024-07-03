#include <iostream>
#include <stack>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    getline(cin,s);
    stack<char> st;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }   
            cout << ' ';
        }
        else if(s[i] == '<'){
            while(!st.empty()){
                cout << st.top();
                st.pop();
            } 
            while(true){
                cout << s[i];
                if(s[i] == '>')break;
                i++;
            }
        }
        else st.push(s[i]);
    }
    while(!st.empty()){
                cout << st.top();
                st.pop();
            }  
}