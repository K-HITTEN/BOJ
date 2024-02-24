#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp;
    cin >> N;
    priority_queue<int> pq;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(tmp == 0){
            if(pq.empty())cout << 0 <<'\n';
            else{
                cout << pq.top()<< '\n';
                pq.pop();
            }
        }else{
            pq.push(tmp);
        }
    }
}