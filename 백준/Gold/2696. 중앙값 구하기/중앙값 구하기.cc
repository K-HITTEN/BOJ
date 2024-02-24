#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
 
using namespace std;
 
int main(void){
    fastio;
    int tmp, T, N;
    cin >> T;
    for(int t = 1; t <= T; t++){
        priority_queue<int> pq1;
        priority_queue<int, vector<int>, greater<int>> pq2;
        vector <int> v;
        cin >> N >> tmp;
        pq1.push(tmp);
        pq2.push(tmp);
        v.push_back(tmp);
        for(int i = 0; i < N/2; i++){
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
            v.push_back(pq1.top());
        }
        cout << v.size();
        for(int i = 0; i < v.size(); i++){
            if(i % 10 == 0) cout <<'\n';
            cout << v[i] << " ";
        }
        cout << "\n";
    }
}