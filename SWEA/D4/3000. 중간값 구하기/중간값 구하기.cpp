#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    long long sum = 0, tmp, A;
    int T, N;
    cin >> T;
    for(int t = 1; t <= T; t++){
        priority_queue<long long> pq1;
        priority_queue<long long, vector<long long>, greater<long long>> pq2;
        sum = 0;
        cin >> N >> A;
        pq1.push(A);
        pq2.push(A);
        for(int i = 1; i <= N; i++){
            cin >> tmp;
            if(pq1.top()> tmp) pq1.push(tmp);
            else pq2.push(tmp);
            cin >> tmp;
            if(pq1.top()> tmp) pq1.push(tmp);
            else pq2.push(tmp);
            if(pq1.size() > pq2.size()){
                pq1.pop();
                pq2.push(pq1.top());
            }
            if(pq1.size() < pq2.size()){
                pq2.pop();
                pq1.push(pq2.top());
            }
            sum += pq1.top();
            sum %= 20171109;
        }
        cout << "#" << t << " " << sum <<"\n";
    }
}