#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct info{
    int like, blank, y, x;
};

struct cmp{
    bool operator()(info &a, info &b){
        if(a.like == b.like && a.blank == b.blank && a.y == b.y)return a.x < b.x;
        if(a.like == b.like && a.blank == b.blank)return a.y < b.y;
        else if(a.like == b.like)return a.blank > b.blank;
        else return a.like > b.like;
    }
};

int map[21][21], N, a, b, dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1}, ret;
bool liked[401][401];
vector<int> v;
vector<info> arr;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N*N; i++){
        cin >> a;
        v.push_back(a);
        for(int j = 0; j < 4; j++){
            cin >> b;
            liked[a][b] = true;
        }
    }
    for(int k = 0; k < N*N; k++){
        arr.clear();
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                int n_like = 0, n_blank = 0;
                if(map[i][j])continue;
                for(int d = 0; d < 4; d++){
                    int ny = i + dy[d], nx = j+dx[d];
                    if(ny<0||nx<0||ny>=N||nx>=N)continue;
                    if(map[ny][nx] == 0)n_blank++;
                    else if(liked[v[k]][map[ny][nx]])n_like++;
                }
                arr.push_back({n_like,n_blank,i,j});
            }
        }
        sort(arr.begin(),arr.end(),cmp());
        map[arr[0].y][arr[0].x] = v[k];
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int cnt = 0;
            for(int d = 0; d < 4; d++){
                int ny = i + dy[d], nx = j + dx[d];
                if(ny < 0|| nx < 0 || ny >= N || nx >= N)continue;
                if(liked[map[i][j]][map[ny][nx]])cnt++;
            }
            if(cnt == 1)ret++;
            else if(cnt == 2)ret += 10;
            else if(cnt == 3)ret += 100;
            else if(cnt == 4)ret += 1000;
        }
    }
    cout << ret;
}