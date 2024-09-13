#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, M = 0, W = 0, ret = 0, tmp;
    vector<int> mh, wh, mm, wm;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin>>tmp;
        if(tmp<0)mm.push_back(tmp);
        else mh.push_back(tmp);
    }
    for(int i = 0; i < N; i++){
        cin>>tmp;
        if(tmp<0)wm.push_back(tmp);
        else wh.push_back(tmp);
    }
    sort(mh.begin(), mh.end());
    sort(mm.begin(), mm.end(),greater<int>());
    sort(wh.begin(), wh.end());
    sort(wm.begin(), wm.end(),greater<int>());
    while(W<wm.size()&&M<mh.size()){
        if(abs(wm[W])>mh[M]){
            ret++;
            W++;
            M++;
        }else{
            W++;
        }
    }
    W = M = 0;
    while(W<wh.size()&&M<mm.size()){
        if(abs(mm[M])>wh[W]){
            ret++;
            W++;
            M++;
        }else{
            M++;
        }
    }
    cout << ret;
}