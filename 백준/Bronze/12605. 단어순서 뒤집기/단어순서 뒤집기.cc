#include<iostream>
#include<string>
#include<stack>

using namespace std;

stack<char> st;
string s;
int N;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    getline(cin,s);
    for(int t = 1; t <= N; t++){
        getline(cin,s);
        cout << "Case #" << t << ": ";
        for(int i = s.length()-1; i >=0; i--){
            if(s[i]==' '){
                while(!st.empty()){
                    cout << st.top();
                    st.pop();
                }
                cout << ' ';
            }else st.push(s[i]);
        }
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
        cout << '\n';
    }
}