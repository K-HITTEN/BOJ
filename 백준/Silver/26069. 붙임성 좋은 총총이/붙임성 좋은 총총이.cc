#include <iostream>
#include <set>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
using namespace std;

int main(void) {
    fastio;
    int N;
    string s1, s2;
    set<string> st;
    st.insert("ChongChong");
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s1 >> s2;
        if(st.find(s1) == st.end()&& st.find(s2) != st.end()){
            st.insert(s1);
        }
        else if(st.find(s1) != st.end()&& st.find(s2) == st.end()){
            st.insert(s2);
        }
    }
    cout <<st.size();
}