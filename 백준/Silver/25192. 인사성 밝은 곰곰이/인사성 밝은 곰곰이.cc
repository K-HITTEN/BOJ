#include <iostream>
#include <string>
#include <set>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, ret = 0;
    set<string> st;
    string s;
    cin >> N;
    getline(cin,s);
    for(int i = 0; i < N; i++){
        getline(cin,s);
        if(s == "ENTER"){
            ret += st.size();
            st.clear();
        }
        else if(st.find(s) == st.end())st.insert(s);
    }
    ret += st.size();
    cout << ret;
}