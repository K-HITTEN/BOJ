#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v, tmp;
int idx = 0, ans, N, K;

void merge(int l,int c,int r){
    int i = l, j = c+1, t = 1;
    while(i <= c && j <= r){
        if(v[i]<=v[j])tmp[t++] = v[i++];
        else tmp[t++] = v[j++];
    }
    while(i <= c)tmp[t++] = v[i++];
    while(j <= r)tmp[t++] = v[j++];
    i = l;
    t = 1;
    while(i <= r){
        if(idx < K){
            ans = tmp[t];
            idx++;
        }
        v[i++] = tmp[t++];
    }
}

void merge_sort(int l, int r){
    if(l<r){
        int c = (l+r)/2;
        merge_sort(l,c);
        merge_sort(c+1,r);
        merge(l,c,r);
    }
}

int main(void){
    fastio;
    cin >> N >> K;
    v.resize(N);
    tmp.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    merge_sort(0,N-1);
    if(idx != K)cout << -1;
    else cout << ans;
}