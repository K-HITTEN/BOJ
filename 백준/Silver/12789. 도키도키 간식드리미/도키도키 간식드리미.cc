#include<iostream>
#include<stack>

using namespace std;
    
stack<int> st;
int N, tmp, idx = 1;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> tmp;
        if(tmp == idx)idx++;
        else st.push(tmp);
        while(!st.empty()&&st.top()==idx){
            idx++;
            st.pop();
        }
    }
    if(st.empty())cout << "Nice";
    else cout << "Sad";
}
