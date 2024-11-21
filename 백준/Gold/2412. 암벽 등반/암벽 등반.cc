#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

struct info{
    int x,y;
};

struct str{
    int num,idx;
};

struct cmp{
    bool operator()(info &a, info &b){
        if(a.y==b.y)return a.x<b.x;
        else return a.y<b.y;
    }
};

bool visited[50000];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int n, T, x, y;
    vector<info> v;
    cin >> n >> T;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmp());
    queue<pair<str,info>> q;
    q.push({{0,0},{0,0}});
    while(!q.empty()){
        str str_tmp = q.front().first;
        info info_tmp = q.front().second;
        q.pop();
        if(info_tmp.y==T){
            cout<< str_tmp.num;
            return 0;
        }
        for(int i = str_tmp.idx; i < v.size(); i++){
            if(abs(info_tmp.x-v[i].x)>2&&abs(info_tmp.y-v[i].y)>2)break;
            if(visited[i]||abs(info_tmp.x-v[i].x)>2||abs(info_tmp.y-v[i].y)>2)continue;
            visited[i] = true;
            q.push({{str_tmp.num+1,i},{v[i].x,v[i].y}});
        }
        for(int i = str_tmp.idx; i >= 0; i--){
            if(abs(info_tmp.x-v[i].x)>2&&abs(info_tmp.y-v[i].y)>2)break;
            if(visited[i]||abs(info_tmp.x-v[i].x)>2||abs(info_tmp.y-v[i].y)>2)continue;
            visited[i] = true;
            q.push({{str_tmp.num+1,i},{v[i].x,v[i].y}});
        }
    }
    cout << -1;
}