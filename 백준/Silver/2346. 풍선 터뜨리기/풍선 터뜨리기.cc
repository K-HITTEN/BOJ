#include<iostream>
#include<deque>

using namespace std;

int N, tmp;
deque<pair<int,int>> dq;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> tmp;
        dq.push_back({i,tmp});
    }
    N--;
    while(N--){
        pair<int,int> temp = dq.front();
        dq.pop_front();
        cout << temp.first << ' ';
        tmp = temp.second;
        if(tmp>0){
            for(int i = 1; i < tmp; i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }else{
            for(int i = 0; i > tmp; i--){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    cout << dq.back().first;
}