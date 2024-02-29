#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio

using namespace std;

struct info{
    int x;
    int op;
};

struct mountain{
    int left;
    int right;
};

struct cmp{
    bool operator()(mountain &a, mountain &b){
        return a.left>b.left;
    }
};

int main(void){
    long long N, sx, sy, ex, ey, nx, ny;
    cin >> N >> sx >> sy;
    ex = sx;
    ey = sy;
    queue<info> q;
    priority_queue<mountain,vector<mountain>,cmp> pq;
    for(int i = 1; i < N; i++){
        cin >> nx >> ny;
        if((ey/abs(ey))*(ny/abs(ny)) < 0){
            info tmp;
            tmp.x = nx;
            tmp.op = (ny-ey)/abs(ny-ey);
            q.push(tmp);
        }
        ex = nx;
        ey = ny;
    }
    if(sy*ny <0){
        info tmp;
        tmp.x = nx;
        tmp.op = (sy-ey)/abs(sy-ey);
        q.push(tmp);
    }
    if(q.front().op == -1){
            q.push(q.front());
            q.pop();
        }
    while(!q.empty()){
        info left = q.front();
        q.pop();
        info right = q.front();
        q.pop();
        mountain tmp;
        if(left.x<right.x){
            tmp.left = left.x;
            tmp.right = right.x;
        }else{
            tmp.left = right.x;
            tmp.right = left.x;
        }
        pq.push(tmp);
    }
    long long x1 = INT_MIN, x2 = INT_MIN;
    long long case1 = 0, case2 = 0;
    while(!pq.empty()){
        mountain tmp = pq.top();
        pq.pop();
        if(x1<tmp.left){
            case1++;
            x1 = tmp.right;
        }
        if(x2<tmp.left){
            case2++;
            x2 = tmp.right;
        }
        if(x2>tmp.left){
            x2 = tmp.right;
        }
    }
    cout << case1 << " " << case2;
}