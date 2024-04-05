#include <iostream>
#include <deque>
#include <vector>
#define fastio cin.tie(0);

using namespace std;

vector<int> v;
deque<int> dq;

int main(void){
    fastio;
    int N, tmp, idx = 1;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    for(int i = N-1; i >=0; i--){
        if(v[i] == 1)dq.push_front(idx);
        else if(v[i] ==2){
            int tmp = dq.front();
            dq.pop_front();
            dq.push_front(idx);
            dq.push_front(tmp);
        }else{
            dq.push_back(idx);
        }
        idx++;
    }
    for(int i = 0; i < N; i++)cout << dq[i] << " ";
    
}