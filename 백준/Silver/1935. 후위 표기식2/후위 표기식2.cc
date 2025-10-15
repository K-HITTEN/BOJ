#include<iostream>
#include<stack>

using namespace std;

stack<double> st;
double arr[26], N, tmp;
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cout << fixed;
    cout.precision(2);
    cin >> N >> s;
    for(int i = 0; i < N; i++)cin >> arr[i];
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '+'){
            tmp = st.top();
            st.pop();
            tmp += st.top();
            st.pop();
            st.push(tmp);
        }else if(s[i] == '-'){
            tmp = st.top();
            tmp *= -1;
            st.pop();
            tmp += st.top();
            st.pop();
            st.push(tmp);
        }else if(s[i] == '*'){
            tmp = st.top();
            st.pop();
            tmp *= st.top();
            st.pop();
            st.push(tmp);
        }else if(s[i] == '/'){
            tmp = st.top();
            st.pop();
            tmp = st.top()/tmp;
            st.pop();
            st.push(tmp);
        }else{
            st.push(arr[s[i]-'A']);
        }
    }
    cout << st.top();
}