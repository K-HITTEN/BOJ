#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

int N, K, cnt;
string s, ret;
stack<char> st;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> K >> s;
    for(int i = 0; i < N; i++){
        while(!st.empty() && cnt < K && st.top() < s[i]){
            cnt++;
            st.pop();
        }
        st.push(s[i]);
    }
    while(cnt < K){
        cnt++;
        st.pop();
    }
    while(!st.empty()){
        ret += st.top();
        st.pop();
    }
    reverse(ret.begin(),ret.end());
    cout << ret;
}