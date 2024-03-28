#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int T, N, tmp1, tmp2;
int map[105][105];
bool visited[105];
vector<pair<int,int>>v;

int main(void){
    fastio;
    cin >> T;
    while(T--){
        fill(&map[0][0],&map[104][105],0);
        cin>>N;
        v.clear();
        for(int i = -2; i < N; i++){
            cin>> tmp1 >> tmp2;
            v.push_back({tmp1,tmp2});
        }
        for(int i = 0; i < N+2; i++){
            for(int j = 0; j < N+2; j++){
                if(i==j)map[i][j] = 0;
                else map[i][j] = abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second);
            }
        }
        for(int k = 0; k < N+2; k++){
            for(int i = 0; i < N+2; i++){
                for(int j = 0; j < N+2; j++){
                    if(k == j)continue;
                    if(map[i][k]<=1000)map[i][j] = min(map[i][j],map[k][j]);
                }
            }
        }
        if(map[0][N+1] >1000)cout << "sad\n";
        else cout << "happy\n";
    }
}