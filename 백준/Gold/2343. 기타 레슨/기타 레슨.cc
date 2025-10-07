#include<iostream>
#include<vector>
#define ll long long

using namespace std;

vector<int> v, tgt;
int N, M, idx;
ll l, r, mid, ret = 1000000001;
bool FLAG;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    v.resize(N);
    tgt.resize(M);
    for(int i = 0; i < N; i++){
        cin >> v[i];
        r += v[i];
    }
    while(l<=r){
        mid = (l+r)/2;
        FLAG = false;
        idx = 0;
        for(int i = 0; i < M; i++)tgt[i] = 0;
        for(int i = 0; i < N; i++){
            if(v[i]>mid){
                FLAG = true;
                break;
            }
            if(tgt[idx]+v[i]>mid){
                if(idx+1 == M){
                    FLAG = true;
                    break;
                }
                tgt[++idx] += v[i];
            }else tgt[idx] += v[i];
        }
        if(FLAG)l = mid+1;
        else {
            ret = min(ret,mid);
            r = mid-1;
        }
    }
    cout << ret;
}