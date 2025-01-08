#include<iostream>
#include<vector>
#include<queue>
#include<tuple>

using namespace std;

int arr[51][51], cop[51][51], N, M, K, r, c, s, tgt[6], ret = 987654321;
vector<tuple<int,int,int>> v;
bool visited[6];

void rotate(int R, int C, int S){
    for(int i = S; i > 0; i--){
        queue<int> q;
        q.push(cop[R-i][C-i]);
        for(int j = C-i+1; j <= C+i; j++){
            q.push(cop[R-i][j]);
            cop[R-i][j] = q.front();
            q.pop();
        }
        for(int j = R-i+1; j <= R+i; j++){
            q.push(cop[j][C+i]);
            cop[j][C+i] = q.front();
            q.pop();
        }
        for(int j = C+i-1; j >= C-i; j--){
            q.push(cop[R+i][j]);
            cop[R+i][j] = q.front();
            q.pop();
        }
        for(int j = R+i-1; j >= R-i; j--){
            q.push(cop[j][C-i]);
            cop[j][C-i] = q.front();
            q.pop();
        }
    }
}

void perm(int tgtIdx){
    if(tgtIdx==K){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <=M; j++){
                cop[i][j] = arr[i][j];
            }
        }
        for(int i = 0; i < K; i++)rotate(get<0>(v[tgt[i]]), get<1>(v[tgt[i]]), get<2>(v[tgt[i]]));
        for(int i = 1; i <= N; i++){
            int sum = 0;
            for(int j = 1; j <= M; j++)sum+=cop[i][j];
            ret = min(sum, ret);
        }
        return;
    }
    for(int i = 0; i < K; i++){
        if(!visited[i]){
            visited[i] = true;
            tgt[tgtIdx] = i;
            perm(tgtIdx+1);
            visited[i] = false;
        }
    }
}


int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M >> K;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < K; i++){
        cin >> r >> c >> s;
        v.push_back({r,c,s});
    }
    perm(0);
    cout << ret;
}