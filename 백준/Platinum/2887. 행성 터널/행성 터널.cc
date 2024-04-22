#include <iostream>
#include <algorithm>
#include <vector>
#include <tuple>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int parent[100001];

vector<pair<int,int>> vx,vy,vz;
vector<tuple<int,int,int>> v;

int find(int x){
    if(parent[x] == x)return x;
    else return parent[x] = find(parent[x]);
}

void merge(int x, int y){
    int px = find(x), py = find(y);
    if(px>py)parent[px] = py;
    else parent[py] = px;
}

int main(void){
    fastio;
    int N, tmp1,tmp2,tmp3;
    cin >> N;
    for(int i = 0; i < N; i++){
        parent[i] = i;
        cin >> tmp1 >> tmp2 >>  tmp3;
        vx.push_back({tmp1,i});
        vy.push_back({tmp2,i});
        vz.push_back({tmp3,i});
    }
    sort(vx.begin(),vx.end());
    sort(vy.begin(),vy.end());
    sort(vz.begin(),vz.end());
    for(int i = 1; i < N; i++){
        v.push_back({abs(vx[i].first-vx[i-1].first),vx[i].second,vx[i-1].second});
        v.push_back({abs(vy[i].first-vy[i-1].first),vy[i].second,vy[i-1].second});
        v.push_back({abs(vz[i].first-vz[i-1].first),vz[i].second,vz[i-1].second});
    }
    sort(v.begin(),v.end());
    int count = 0, result = 0;
    for(int i = 0; i < v.size(); i++){
        if(find(get<1>(v[i])) != find(get<2>(v[i]))){
            result += get<0>(v[i]);
            merge(get<1>(v[i]),get<2>(v[i]));
            count++;
            if(count == N-1)break;
        }
    }
    cout << result;
}