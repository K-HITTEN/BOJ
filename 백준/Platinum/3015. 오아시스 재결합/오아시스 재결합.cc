#include <iostream>
#include <stack>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp;
    long long answer = 0;
    stack<pair<int,int>> st;
    cin >> N;
    for(int i = 0; i < N; i++){
        int count = 1;
        cin >> tmp;
        while(!st.empty()&&st.top().first<=tmp){
            answer+=st.top().second;
            if(st.top().first == tmp)count += st.top().second;
            st.pop();
        }
        if(!st.empty()&&st.top().first>tmp)answer++;
        st.push({tmp,count});
    }
    cout << answer;
}