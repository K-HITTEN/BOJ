#include <iostream>
#include <algorithm>
#include <stack>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s1, s2;
    cin >> s1 >> s2;
    stack<char> st;
    for(int i = 0; i < s1.length(); i++){
        st.push(s1[i]);
        if(s1[i]==s2[s2.length()-1] && st.size()>=s2.length()){
            string tmp = "";
            for(int j = 0; j < s2.length(); j++){
                tmp += st.top();
                st.pop();
            }
            reverse(tmp.begin(),tmp.end());
            if(tmp != s2){
                for(int j = 0; j < tmp.length(); j++)st.push(tmp[j]);
            }
        }
    }
    if(st.empty())cout << "FRULA";
    else{
        stack<char> answer;
        while(!st.empty()){
            answer.push(st.top());
            st.pop();
        }
        while(!answer.empty()){
            cout << answer.top();
            answer.pop();
        }
    }
}