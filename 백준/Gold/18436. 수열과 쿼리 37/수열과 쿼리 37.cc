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
    if (S == E){
        if(arr[S]%2== 0)return tree[i] = {1,0};
        return tree[i] = {0,1};
    } 
    else {
        pair<long long,long long> a,b;
        a = init(2*i,S,(S+E)/2);
        b = init(2*i+1,(S+E)/2+1,E);
        return tree[i] = {a.first+b.first,a.second+b.second};
    }
}

pair<long long,long long> update(int i, int S, int E, int idx, int val){
    if(idx < S || E < idx)return tree[i];
    if(S==E){
        if(val%2== 0)return tree[i] = {1,0};
        return tree[i] = {0,1};
    }
    pair<long long,long long> a,b;
    a = update(2*i,S,(S+E)/2,idx,val);
    b = update(2*i+1,(S+E)/2+1,E,idx,val);
    return tree[i] = {a.first+b.first,a.second+b.second};
}

pair<long long,long long> query(int i, int S, int E, int L, int R){
    if(E<L||R<S)return {0,0};
    if(L<=S&&E<=R)return tree[i];
    pair<long long,long long> a,b;
    a = query(2*i,S,(S+E)/2,L,R);
    b = query(2*i+1,(S+E)/2+1,E,L,R);
    return {a.first+b.first,a.second+b.second};
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
        cin >> a >> b >> c;
        if(a == 1){
            update(1,1,N,b,c);
            arr[b] = c;
        }
        else if(a==2) cout << query(1,1,N,b,c).first <<"\n";
        else cout << query(1,1,N,b,c).second <<"\n";
    }
}


