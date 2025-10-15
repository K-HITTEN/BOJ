#include<iostream>
#include<stack>

using namespace std;

stack<int> st;
int N, tmp;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> tmp;
        while(!st.empty()&&st.top()<=tmp)st.pop();
        st.push(tmp);
    }
    cout << st.size();
}