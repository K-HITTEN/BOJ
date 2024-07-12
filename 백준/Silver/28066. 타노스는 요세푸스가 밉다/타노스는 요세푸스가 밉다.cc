#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;


int main(void){
    fastio;
    int N, K;
    queue <int> q;
    cin >> N >> K;
    for(int i = 1; i <= N; i++)q.push(i);
    while(q.size() > 1){
        if(q.size() < K)break;
        q.push(q.front());
        for(int i = 0; i < K; i++)q.pop();
    }
    cout << q.front();
}