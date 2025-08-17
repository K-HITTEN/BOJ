#include<iostream>
#include<stack>

using namespace std;

int N, tmp;
stack<int> st;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> tmp;
        if(tmp==1){
            cin >> tmp;
            st.push(tmp);
        }else if(tmp==2){
            if(st.empty())cout << -1 << "\n";
            else {
                cout << st.top() << "\n";
                st.pop();
            }
        }else if(tmp==3)cout << st.size() << "\n";
        else if(tmp==4)cout << st.empty() << "\n";
        else{
            if(st.empty())cout << -1 << "\n";
            else cout << st.top() << "\n";
        }
    }
}