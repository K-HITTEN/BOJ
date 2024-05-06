#include <iostream>
#include <stack>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    long long N, h, idx, answer;
    while(true){
        cin >> N;
        if(N == 0)break;
        answer = 0;
        stack<pair<long long,long long>> st;
        for(int i = 0; i < N; i++){
            cin >> h;
            idx = i;
            while(!st.empty() && st.top().second>h){
                idx = st.top().first;
                answer = max(answer,(st.top().second*(i-idx)));
                st.pop();
            }
            if(st.empty() || st.top().second < h)st.push({idx,h});
        }
        while(!st.empty()){
            answer = max(answer,(st.top().second*(N-st.top().first)));
            st.pop();
        }
        cout << answer<<"\n";
    }
}