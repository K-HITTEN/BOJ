#include<iostream>
#include<queue>

using namespace std;

priority_queue<int> pq;
priority_queue<int,vector<int>,greater<int>> mq;
long long N, tmp, sum = 0;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> tmp;
        if(tmp>1)pq.push(tmp);
        else if(tmp<1)mq.push(tmp);
        else sum++;
    }
    while(!pq.empty()){
        if(pq.size()==1){
            sum += pq.top();
            pq.pop();
        }else{
            tmp = pq.top();
            pq.pop();
            tmp *= pq.top();
            pq.pop();
            sum += tmp;
        }
    }
    while(!mq.empty()){
        if(mq.size()==1){
            sum += mq.top();
            mq.pop();
        }else{
            tmp = mq.top();
            mq.pop();
            tmp *= mq.top();
            mq.pop();
            sum += tmp;
        }
    }
    cout << sum;
}