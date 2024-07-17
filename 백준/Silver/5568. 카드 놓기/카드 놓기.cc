#include <iostream>
#include <vector>
#include <set>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int n, k, count = 0;
vector<int> src, tgt;
set<int> s;
bool visited[11];

void perm(int idx){
    if(idx == k){
        int ret = 0;
        for(int i = 0; i < k; i++){
            if(tgt[i]<10)ret*=10;
            else ret*=100;
            ret += tgt[i];
        }
        if(s.find(ret) == s.end()){
            count++;
            s.insert(ret);
        }
        return;
    }
    for(int i = 0; i < n; i++){
        if(visited[i])continue;
        visited[i] = true;
        tgt[idx] = src[i];
        perm(idx+1);
        visited[i] = false;
    }
}

int main(void){
    fastio;
    cin >> n >> k;
    src.resize(n);
    tgt.resize(k);
    for(int i = 0; i < n; i++)cin >> src[i];
    perm(0);
    cout << count;
}