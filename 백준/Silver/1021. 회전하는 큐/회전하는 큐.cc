#include<iostream>
#include<deque>

using namespace std;

deque<int> dq;
int N, M, x, idx, cnt = 0;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 1; i <= N; i++)dq.push_back(i);
    while(M--){
        cin >> x;
        for(int i = 0; i < dq.size(); i++){
            if(dq[i]==x){
                idx = i;
                break;
            }
        }
        while(dq.front()!=x){
            cnt++;
            if(idx<=dq.size()/2){
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else{
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
        dq.pop_front();
    }
    cout << cnt;
}