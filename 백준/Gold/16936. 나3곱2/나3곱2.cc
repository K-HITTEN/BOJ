#include<iostream>
#include<queue>
#include<deque>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    long long tmp;
    deque<long long> dq;
    queue<long long> q;
    cin >> N;
    while(N--){
        cin >> tmp;
        q.push(tmp);
    }
    dq.push_back(q.front());
    q.pop();
    while(!q.empty()){
        tmp = q.front();
        q.pop();
        if(dq.front()*3==tmp||dq.front()==tmp*2)dq.push_front(tmp);
        else if(dq.back()*2==tmp||dq.back()==tmp*3)dq.push_back(tmp);
        else q.push(tmp);
    }
    for(int i = 0; i < dq.size(); i++){
        cout << dq[i] << " "; 
    }
}