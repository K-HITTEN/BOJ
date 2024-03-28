#include <iostream>
#include <stack>
#define fastio cin.tie(0)->ios_base::sync_with_stdio

using namespace std;

int main(void){
    fastio;
    int N;
    string s;
    cin >> N;
    stack<string> st;
    for(int i = 0; i < N; i++){
        cin >> s;
        if(s=="READ"&&!st.empty()){
            cout << st.top() << "\n";
            st.pop();
        }else{
            st.push(s);
        }
    }
}