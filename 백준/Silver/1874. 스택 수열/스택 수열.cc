#include<iostream>
#include<vector>
#include<stack>

using namespace std;

stack<int> st;
vector<int> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, idx = 0;
    string s = "";
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin>>v[i];
    for(int i = 1; i <= N; i++){
        st.push(i);
        s+="+\n";
        while(!st.empty()&&st.top()==v[idx]){
            st.pop();
            s+="-\n";
            idx++;
        }
    }
    if(st.empty())cout<<s;
    else cout << "NO";
}