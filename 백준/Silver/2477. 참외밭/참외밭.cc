#include<iostream>
#include<deque>

using namespace std;

int K, a, b;
deque<pair<int,int>> dq;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> K;
    for(int i = 0; i < 6; i++){
        cin >> a >> b;
        dq.push_back({a,b});
    }
    while(true){
        if(dq[2].first == dq[4].first && dq[3].first == dq[5].first)break;
        dq.push_back(dq.front());
        dq.pop_front();
    }
    cout << K*(dq[0].second*dq[1].second-dq[3].second*dq[4].second);
}