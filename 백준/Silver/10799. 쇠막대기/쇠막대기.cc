#include <iostream>
#include <stack>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int result = 0;
    string s;
    stack<char> st;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(')st.push(s[i]);
        else{
            st.pop();
            if(s[i-1] == '(')result += st.size();
            else result++;
        }
    }
    cout << result;
}