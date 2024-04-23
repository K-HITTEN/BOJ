#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp;
    cin >> N;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        pq.push(tmp);
    }
    if (N == 1){
        cout << 0; 
        return 0;
    }
    int count = 0;
    while(pq.size() != 1){
        int tmp = pq.top();
        pq.pop();
        count += tmp + pq.top();
        pq.push(tmp + pq.top());
        pq.pop();
    }
    cout << count;
}