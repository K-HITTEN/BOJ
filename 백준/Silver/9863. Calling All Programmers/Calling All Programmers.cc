#include<iostream>
#include<queue>

using namespace std;  

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int n,m,k,ret;
    while(true){
        cin >> n >> m >> k;
        if(n==0&&m==0&&k==0)return 0;
        queue<int> q;
        for(int i = 1; i <= n; i++)q.push(i);
        for(int i = 0; i < k; i++){
            for(int i = 1; i < m; i++){
                q.push(q.front());
                q.pop();
            }
            ret = q.front();
            q.pop();
        }
        cout << ret << "\n";
    }
}