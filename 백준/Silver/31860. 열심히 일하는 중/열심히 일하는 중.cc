#include <iostream>
#include <queue>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;


int main(void){
    fastio;
    int N, M, K, tmp, day = 0, Y = 0;
    priority_queue<int> pq;
    vector<int> v;
    cin >> N >> M >> K;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        pq.push(tmp);
    }
    while(pq.top()> K){
        int temp = pq.top();
        pq.pop();
        Y = (Y/2) + temp;
        v.push_back(Y);
        pq.push(temp-M);
    }
    cout << v.size() << "\n";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
}