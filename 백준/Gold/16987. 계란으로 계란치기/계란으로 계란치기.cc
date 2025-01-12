#include<iostream>
#include<vector>

using namespace std;

struct info{
    int S, W;
};

int N, s, w, ret = 0;
vector<info> v;

void calc(int idx){
    if(idx==N){
        int cnt = 0;
        for(int i = 0; i < N; i++)if(v[i].S<=0)cnt++;
        ret = max(ret,cnt);
        return;
    }
    if(v[idx].S<=0)calc(idx+1);
    else {
        bool FLAG = false;
        for(int i = 0; i < N; i++){
            if(idx==i||v[i].S<=0)continue;
            FLAG = true;
            v[idx].S -= v[i].W;
            v[i].S -= v[idx].W;
            calc(idx+1);
            v[i].S += v[idx].W;
            v[idx].S += v[i].W;
        }
        if(!FLAG)calc(idx+1);
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s >> w;
        v.push_back({s,w});
    }
    calc(0);
    cout << ret;
}