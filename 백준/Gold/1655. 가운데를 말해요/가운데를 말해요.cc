#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp;
    cin >> N;
    priority_queue <int> pq1;
    priority_queue <int, vector<int>, greater<int>> pq2;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(pq1.empty() && pq2.empty())pq1.push(tmp);
        else if(pq2.empty()){
            if(pq1.top()<tmp)pq2.push(tmp);
            else{
                pq1.push(tmp);
                pq2.push(pq1.top());
                pq1.pop();
            }
        }
        else{
            if(pq1.top()<tmp){
                pq2.push(tmp);
                if(pq1.size()<pq2.size()){
                    pq1.push(pq2.top());
                    pq2.pop();
                }
            }else{
                pq1.push(tmp);
                if(pq1.size()>pq2.size()+1){
                    pq2.push(pq1.top());
                    pq1.pop();
                }
            }
        }
        cout<<pq1.top()<<"\n";
    }
}