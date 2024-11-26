#include<iostream>
#include<vector>

using namespace std;

struct info{
    int R,C;
};

int H,W,N,r,c, ret = 0;
vector<info> v;

void comb(int h, int w, int idx, int n, int sum){
    if(n == 2){
        ret = max(ret,sum);
        return;
    }
    if(idx==v.size())return;
    if(h>=v[idx].R&&w>=v[idx].C){
        comb(h,w-v[idx].C,idx+1,n+1,sum+v[idx].R*v[idx].C);
        comb(h-v[idx].R,w,idx+1,n+1,sum+v[idx].R*v[idx].C);
    }
    if(h>=v[idx].C&&w>=v[idx].R){
        comb(h,w-v[idx].R,idx+1,n+1,sum+v[idx].R*v[idx].C);
        comb(h-v[idx].C,w,idx+1,n+1,sum+v[idx].R*v[idx].C);
    }
    comb(h,w,idx+1,n,sum);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> H >> W >> N;
    while(N--){
        cin >> r >> c;
        v.push_back({r,c});
    }
    comb(H,W,0,0,0);
    cout << ret;
}