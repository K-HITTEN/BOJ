#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct info{
    int num, x, y;
};

struct info2{
    int num, diff;
};

struct cmp{
    bool operator()(info2 &a, info2 &b){
        return a.diff > b.diff;
    }
};

int parent[501];
bool visited[501];

int find(int x){
    if(parent[x] == x)return x;
    else return parent[x] = find(parent[x]);
}

void merge(int y, int x){
    int py = find(y), px = find(x);
    if(py>px)parent[py] = px;
    else parent[px] = py;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T = 1, N, x, y;
    while(true){
        cin >> N;
        if(!N)break;
        vector<info> v;
        vector<priority_queue<info2,vector<info2>,cmp>> pq;
        fill(visited,visited+501,false);
        pq.resize(N);
        int cnt = 0;
        for(int i = 0; i < N; i++)parent[i] = i;
        for(int i = 0; i < N; i++){
            cin >> x >> y;
            v.push_back({i,x,y});
        }
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(i==j)continue;
                pq[i].push({j,abs(v[i].x-v[j].x)+abs(v[i].y-v[j].y)});
            }
        }
        for(int i = 0; i < N; i++){
            int tmp = pq[i].top().diff;
            while(!pq[i].empty()){
                info2 temp = pq[i].top();
                pq[i].pop();
                if(temp.diff != tmp)break;
                if(find(i)!=find(temp.num)){
                    merge(i,temp.num);
                }
            }
        }
        for(int i = 0; i < N; i++){
            if(!visited[find(i)]){
                visited[find(i)] = true;
                cnt++;
            }
        }
        cout << "Sky " << T << " contains " << cnt << " constellations.\n";
        T++;
    }
}