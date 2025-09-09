#include<iostream>
#include<stack>

using namespace std;

int N, cnt = 0;
string s;
stack<char> st;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        while(!st.empty())st.pop();
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(st.empty())st.push(s[i]);
            else{
                if(st.top()==s[i])st.pop();
                else st.push(s[i]);
            }
        }
        if(st.empty())cnt++;
    }
    cout << cnt;
}