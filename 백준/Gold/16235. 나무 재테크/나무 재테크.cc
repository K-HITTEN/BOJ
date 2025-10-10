#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int N, M, K, x, y, z, cnt, tmp, A[10][10], arr[10][10], check[10][10], dy[8] = {-1,-1,-1,0,0,1,1,1}, dx[8] = {-1,0,1,-1,1,-1,0,1};
priority_queue<int,vector<int>, greater<int>> pq[10][10];
vector<int> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M >> K;
    for(int r = 0; r < N; r++){
        for(int c = 0; c < N; c++){
            cin >> A[r][c];
            arr[r][c] = 5;
        }
    }
    while(M--){
        cin >> x >> y >> z;
        pq[x-1][y-1].push(z);
    }
    while(K--){
        for(int r = 0; r < N; r++){
            for(int c = 0; c < N; c++){
                if(!(pq[r][c].empty())){
                    v.clear();
                    tmp = 0;
                    while(!pq[r][c].empty()){
                        int tree = pq[r][c].top();
                        pq[r][c].pop();
                        if(arr[r][c]-tree>=0){
                            arr[r][c]-=tree;
                            v.push_back(tree+1);
                        }else{
                            tmp += (tree/2);
                        }
                    }
                    for(int i = 0; i < v.size(); i++){
                        pq[r][c].push(v[i]);
                        if(!(v[i]%5))check[r][c]+=1;
                    }
                    arr[r][c] += tmp;
                }
            }
        }
        for(int r = 0; r < N; r++){
            for(int c = 0; c < N; c++){
                if(check[r][c]){
                    for(int d = 0; d < 8; d++){
                        int ny = r + dy[d], nx = c + dx[d];
                        if(ny<0||nx<0||ny>=N||nx>=N)continue;
                        for(int i = 0; i < check[r][c]; i++)pq[ny][nx].push(1);
                    }
                    check[r][c] = 0;
                }
            }
        }
        for(int r = 0; r < N; r++){
            for(int c = 0; c < N; c++){
                arr[r][c] += A[r][c];
            }
        }
    }
    for(int r = 0; r < N; r++){
        for(int c = 0; c < N; c++){
            cnt += pq[r][c].size();
        }
    }
    cout << cnt;
}