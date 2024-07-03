#include <iostream>
#include <stack>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    int N;
    cin >> N;
    stack<char> st;
    getline(cin,s);
    for(int i = 0; i < N; i++){
        getline(cin,s);
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                while(!st.empty()){
                    cout << st.top();
                    st.pop();
                }   
                cout << ' ';
            }
            else st.push(s[i]);
        }
        while(!st.empty()){
                    cout << st.top();
                    st.pop();
        }
        cout << "\n";
    }
}