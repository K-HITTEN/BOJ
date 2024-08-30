#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    int T, N;
    cin >> T;
    while(T--){
        vector<int> v;
        cin >> N;
        v.resize(N);
        for(int i = 0; i < N; i++)cin >> v[i];
        sort(v.begin(),v.end());
        deque<int> dq;
        for(int i = N-1; i >= 0; i--){
            if(i%2==0)dq.push_front(v[i]);
            else dq.push_back(v[i]);
        }
        int min_val = 0;
        for(int i = 1; i < N; i++){
            min_val = max(min_val,abs(dq[i]-dq[i-1]));
        }
        min_val = max(min_val,abs(dq[N-1]-dq[0]));
        cout << min_val << "\n";
    }
}
