#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int n,w,L,tmp, nL = 0, t = 0, idx = 0;
    queue<int> q;
    cin >> n >> w >> L;
    for(int i = 0; i < w; i++)q.push(0);
    for(int i = 0; i < n; i++){
        cin >> tmp;
        nL-= q.front();
        q.pop();
        nL+= tmp;
        while(L<nL){
            q.push(0);
            nL-=q.front();
            q.pop();
            t++;
        }
        q.push(tmp);
        t++;
    }
    while(!q.empty()){
        q.pop();
        t++;
    }
    cout << t;
}