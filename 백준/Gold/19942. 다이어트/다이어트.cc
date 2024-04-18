#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N,mp,mf,ms,mv,min_cost = 987654321;
int src[16][5];
bool visited[16];
vector<int> result;

void backtracking(int srcIdx){
    if(srcIdx > N){
        int np,nf,ns,nv,ncost;
        np = nf = ns = nv = ncost = 0;
        for(int i = 1; i <= N; i++){
            if(visited[i]){
                np += src[i][0];
                nf += src[i][1];
                ns += src[i][2];
                nv += src[i][3];
                ncost += src[i][4];
            }
        }
        if(np>=mp&&nf>=mf&&ns>=ms&&nv>=mv&&min_cost>ncost){
            min_cost = ncost;
            result.clear();
            for(int i = 1; i <= N; i++)if(visited[i])result.push_back(i);
            for(int i = result.size()-1; i>=0; i--){
                if(src[result[i]][4] == 0){
                    np -= src[result[i]][0];
                    nf -= src[result[i]][1];
                    ns -= src[result[i]][2];
                    nv -= src[result[i]][3];
                    if(np>=mp&&nf>=mf&&ns>=ms&&nv>=mv)result.pop_back();
                    else break;
                }
                else break;
            }
        }
        
        return;
    }
    visited[srcIdx] = true;
    backtracking(srcIdx+1);
    visited[srcIdx] = false;
    backtracking(srcIdx+1);
}


int main(void){
    fastio;
    cin >> N >> mp >> mf >> ms >> mv;
    for(int i = 1; i <= N; i++)cin >> src[i][0] >> src[i][1] >> src[i][2] >> src[i][3] >> src[i][4];
    backtracking(1);
    if(min_cost == 987654321){
        cout << -1;
        return 0;
    }
    cout << min_cost << "\n";
    for(int i = 0; i < result.size(); i++)cout << result[i] << " ";
}

