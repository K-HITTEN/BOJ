#include<iostream>
#include<deque>

using namespace std;

int N, M, tmp;
deque<int> dq;
bool check[100001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++)cin >> check[i];
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(!check[i])dq.push_back(tmp);
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> tmp;
        dq.push_front(tmp);
        cout << dq.back() << ' ';
        dq.pop_back();
    }
}