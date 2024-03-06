#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct road{
  int x,y,cost;
};

struct cmp{
    bool operator() (road &e1,road &e2){
        return e1.cost>e2.cost;
    }
};

int N, M,result = 0;
int arr[100001] = {0,};
bool home[100001] = {false,};
priority_queue<road,vector<road>,cmp> pq;

int find(int x){
    if(arr[x] == x) return x;
    else return arr[x] = find(arr[x]);
}

void merge(int x, int y){
    int nx = find(x), ny = find(y);
    if(nx>ny)arr[nx] = ny;
    else arr[ny] = nx;
}

int main(void){
    fastio;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        road tmp;
        cin >> tmp.x >> tmp.y >> tmp.cost;
        pq.push(tmp);
    }
    for(int i = 1; i <= N; i++)arr[i] = i;
    N = N-2;
    while(!pq.empty()&& N!= 0){
        road tmp = pq.top();
        pq.pop();
        if(find(tmp.x) != find(tmp.y)){
            N--;
            merge(tmp.x,tmp.y);
            result += tmp.cost;
        }
    }
    cout << result;
}