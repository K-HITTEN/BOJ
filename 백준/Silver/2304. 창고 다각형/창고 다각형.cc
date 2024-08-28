#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void) {
    fastio;
    vector<pair<int,int>> v;
    int N, L, H, maxy = 0, res = 0;
    bool FLAG = false;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> L >> H;
        maxy = max(maxy,H);
        v.push_back({L,H});
    }
    sort(v.begin(), v.end());
    stack<pair<int,int>> st;
    for(int i = 0; i < N; i++){
        if(st.empty())st.push(v[i]);
        else{
            if(FLAG){
                if(st.top().second == maxy)st.push(v[i]);
                else {
                    while(st.top().second < v[i].second)st.pop();
                    st.push(v[i]);
                }
            }else{
                if(st.top().second>v[i].second)continue;
                else st.push(v[i]);
            }
        }
        if(v[i].second == maxy)FLAG=true;
    }
    while(st.size() != 1){
        pair<int,int> tmp = st.top();
        st.pop();
        if(FLAG && tmp.second == maxy){
            FLAG = false;
            res += maxy;
        }
        if(FLAG){
            res += (tmp.first-st.top().first)*tmp.second;
        }
        else{
            res += (tmp.first-st.top().first)*st.top().second;
        }
    }
    if(FLAG) res += maxy;
    cout << res;
}