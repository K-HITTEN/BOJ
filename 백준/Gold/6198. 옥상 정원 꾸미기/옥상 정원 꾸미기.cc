#include <iostream>
#include <stack>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp;
    long long res = 0;
    cin >> N;
    stack<int> st;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        while(!st.empty()&&st.top()<=tmp){
            st.pop();
            res += st.size();
        }
        st.push(tmp);
    }
    while(!st.empty()){
        st.pop();
        res += st.size();
    }
    cout << res;
}