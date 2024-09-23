#include<iostream>
#include<queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

string arr[300001];

int main(void){
    fastio;
    long long N, K, ret = 0;
    cin >> N >> K;
    queue<string> q[21];
    for(int i = 1; i <= N; i++){
        cin >> arr[i];
    }
    string tmp;
    for(int i = 1; i < 1+K; i++){
        q[(int)arr[i].length()].push(arr[i]);
    }
    for(int i = 1; i <= N; i++){
        tmp = arr[i];
        q[tmp.length()].pop();
        if(i+K<=N)q[(int)arr[i+K].length()].push(arr[i+K]);
        ret += q[tmp.length()].size();
    }
    cout << ret;
}