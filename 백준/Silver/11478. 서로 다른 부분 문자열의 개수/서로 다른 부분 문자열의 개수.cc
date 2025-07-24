#include<iostream>
#include<string>
#include<set>

using namespace std;

set<string> st;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        for(int j = i; j < s.length(); j++){
            st.insert(s.substr(i,j-i+1));
        }
    }
    cout << st.size();
}
