#include <iostream>
#include <queue>
#include <tuple>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1}; 
bool visited[1000][1000] = {false,}, visited2[1000][1000] = {false,};
char arr[1000][1000];

int main(void){
    fastio;
    int T, y, x;
    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> x >> y;
        fill(&visited[0][0], &visited[999][1000],false);
        fill(&visited2[0][0], &visited2[999][1000],false);
        queue<tuple<int,int,int>> fq, hq; 
        for(int i = 0; i < y; i++){
            for(int j = 0; j < x; j++){
                cin >> arr[i][j];
                if(arr[i][j] == '@'){
                    hq.push({0,i,j});
                    visited2[i][j] = true;
                }
                else if(arr[i][j] == '*'){
                    fq.push({0,i,j});
                    visited[i][j] = true;
                }
                else if(arr[i][j] == '#'){
                    visited[i][j] = true;
                    visited2[i][j] = true;
                }
            }
        }
        bool FLAG = false;
        int day = 0;
        while(true){
            while(!fq.empty()&&get<0>(fq.front()) == day){
                tuple<int,int,int> tmp = fq.front();
                fq.pop();
                for(int d = 0; d < 4; d++){
                    int ny = get<1>(tmp) + dy[d], nx = get<2>(tmp) + dx[d];
                    if(ny < 0 || nx < 0 || ny >= y || nx >= x || visited[ny][nx])continue;
                    visited[ny][nx] = true;
                    fq.push({day+1,ny,nx});
                }
            }
            if(hq.empty()){
                cout<<"IMPOSSIBLE\n";
                break;
            }
            else {
                while(!hq.empty() && get<0>(hq.front()) == day){
                    tuple<int,int,int> tmp = hq.front();
                    hq.pop();
                    for(int d = 0; d < 4; d++){
                        int ny = get<1>(tmp) + dy[d], nx = get<2>(tmp) + dx[d];
                        if(ny < 0 || nx < 0 || ny >= y || nx >= x)FLAG = true;
                        if(FLAG)break;
                        if(visited[ny][nx] || visited2[ny][nx])continue;
                        visited2[ny][nx] = true;
                        hq.push({day+1,ny,nx});
                    }
                    if(FLAG)break;
                }
                if(FLAG)cout << day+1 << "\n";
            }
            if(FLAG)break;
            day++;
        }
    }
}