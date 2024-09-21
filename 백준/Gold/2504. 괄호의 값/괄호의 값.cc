#include<iostream>
#include<stack>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    stack<char> st;
    int ret = 0, tmp = 1;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            tmp *= 2;
            st.push(s[i]);
        }else if(s[i] == '['){
            tmp *= 3;
            st.push(s[i]);
        }else{
            if(st.empty()||(s[i] == ')'&& st.top() == '[')||(s[i] == ']'&& st.top() == '(')){
                cout << 0;
                return 0;
            }
            if((s[i] == ')'&&s[i-1] == '(')||(s[i] == ']'&&s[i-1] == '['))ret += tmp;
            st.pop();
            if(s[i] == ')')tmp /= 2;
            else tmp /= 3;
        }
    }
    if(!st.empty())cout << 0;
    else cout << ret;
}