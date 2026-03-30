#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct info{
    int x, y, z;
};

struct cmp{
    bool operator()(info &a, info &b){
        return a.z < b.z;
    }
};

int m, n, x, y, z, sum, sum2, arr[200001];
vector<info> v;

int find(int idx){
    if(arr[idx] == idx)return idx;
    else return arr[idx] = find(arr[idx]);
}

void merge(int x, int y){
    int nx = find(x), ny = find(y);
    if(nx>ny)arr[nx] = ny;
    else arr[ny] = nx;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    while(true){
        cin >> m >> n;
        if(!m&&!n)return 0;
        for(int i = 1; i <= m; i++)arr[i] = i;
        sum = sum2 = 0;
        v.clear();
        for(int i = 0; i < n; i++){
            cin >> x >> y >> z;
            sum += z;
            v.push_back({x,y,z});
        }
        sort(v.begin(),v.end(),cmp());
        for(int i = 0; i < n; i++){
            if(find(v[i].x) != find(v[i].y)){
                merge(v[i].x,v[i].y);
                sum2 += v[i].z;
            }
        }
        cout << sum-sum2 << '\n';
    }
}