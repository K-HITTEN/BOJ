#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int T, N, tmp, tmp2;
    cin >> T;
    for(int t = 1; t <= T; t++){
        priority_queue <int> pq;
        cout << "#" << t << " ";
        cin >> N;
        for(int i = 0; i < N; i++){
            cin >> tmp;
            if(tmp == 1){
                cin >> tmp2;
                pq.push(tmp2);
            }else{
                if(!pq.empty()){
                    cout << pq.top() << " ";
                    pq.pop();
                }else{
                    cout << -1 << " ";
                }
            }
        }
        cout << "\n";
    }
}