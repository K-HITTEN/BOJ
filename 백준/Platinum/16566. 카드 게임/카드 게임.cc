#include <iostream>
#include <algorithm>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v;
bool visited[4000001];

int main(void){
    fastio;
    int N, M, K, tmp;
    cin >> N >> M >> K;
    v.resize(M);
    for(int i = 0; i < M; i++)cin >> v[i];
    sort(v.begin(),v.end());
    for(int i = 0; i < K; i++){
        cin >> tmp;
        int idx = lower_bound(v.begin(),v.end(),tmp) - v.begin();
        if(tmp == v[idx])idx++;
        while(true){
            if(visited[idx])idx++;
            else{
                cout << v[idx] << "\n";
                visited[idx] = true;
                break;
            }
        }
    }
}