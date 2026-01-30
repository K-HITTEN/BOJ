#include<iostream>
#include<set>

using namespace std;

set<char> st;
string s;
int y, cnt;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> s;
    st.insert('a');
    st.insert('e');
    st.insert('i');
    st.insert('o');
    st.insert('u');
    for(int i = 0; i < s.length(); i++){
        if(st.find(s[i])!=st.end())cnt++;
        else if(s[i]=='y')y++;
    }
    cout << cnt << ' ' << cnt+y;
}