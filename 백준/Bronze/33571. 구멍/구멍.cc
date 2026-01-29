#include<iostream>
#include<set>
#include<string>

using namespace std;

string s;
int cnt;
set<char> st;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    st.insert('A');
    st.insert('a');
    st.insert('b');
    st.insert('D');
    st.insert('d');
    st.insert('e');
    st.insert('g');
    st.insert('O');
    st.insert('o');
    st.insert('P');
    st.insert('p');
    st.insert('Q');
    st.insert('q');
    st.insert('R');
    st.insert('@');
    getline(cin,s);
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='B')cnt+=2;
        else if(st.find(s[i])!=st.end())cnt++;
    }
    cout << cnt;
}