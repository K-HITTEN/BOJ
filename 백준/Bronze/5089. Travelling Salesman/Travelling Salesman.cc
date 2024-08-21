#include <iostream>
#include <set>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, idx = 1;
    string s;
    while(true){
        cin >> N;
        getline(cin, s);
        if(N == 0)break;
        set<string> st;
        for(int i = 0; i < N; i++){
            getline(cin, s);
            if(st.find(s) == st.end()){
                st.insert(s);
            }
        }
        cout << "Week " << idx << " " << st.size() << "\n";
        idx++;
    }
}