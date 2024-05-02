#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#define fastio cin.tie(0)->ios::sync_with_stdio(0)

using namespace std;

int N, M;
vector<long long> arr;
vector<pair<long long,long long>> tree;

pair<long long,long long> init(int i, int S, int E){
    if (S == E) return tree[i] = {arr[S],S};
    else return tree[i] = min(init(2*i,S,(S+E)/2),init(2*i+1,(S+E)/2+1,E));
}

pair<long long,long long> update(int i, int S, int E, int idx, int val){
    if(idx < S || E < idx)return tree[i];
    if(S==E)return tree[i] = {val,tree[i].second};
    return tree[i] = min(update(2*i,S,(S+E)/2,idx,val),update(2*i+1,(S+E)/2+1,E,idx,val));
}

pair<long long,long long> query(int i, int S, int E, int L, int R){
    if(E<L||R<S)return {LONG_MAX,LONG_MAX};
    if(L<=S&&E<=R)return tree[i];
    return min(query(2*i,S,(S+E)/2,L,R),query(2*i+1,(S+E)/2+1,E,L,R));
}

int main() {
    fastio;
    cin >> N;
    arr.resize(N+1);
    tree.resize(4*N+1);
    for(int i = 1; i <= N; i++)cin >> arr[i];
    init(1,1,N);
    cin >> M;
    for(int i = 0; i < M; i++){
        long long a,b,c;
        cin >> a;
        if(a == 1){
            cin >> b >> c;
            update(1,1,N,b,c);
            arr[b] = c;
        }
        else cout << query(1,1,N,1,N).second <<"\n";
    }
}