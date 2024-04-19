#include <iostream>
#include <climits>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N,M;
int answer = INT_MAX, dy[8] = {-1,1,0,0,-1,-1,1,1}, dx[8] = {0,0,-1,1,-1,1,-1,1};
bool map[8][8], _copy[8][8];

void click(int y, int x){
    _copy[y][x] = !_copy[y][x];
    for(int d = 0; d < 8; d++){
        int ny = y + dy[d], nx = x + dx[d];
        if(ny<0||nx<0||ny>=N||nx>=M)continue;
        _copy[ny][nx] = !_copy[ny][nx];
    }
}

bool map_check(){
    for(int i = 0; i < N; i++)for(int j = 0; j < M; j++)if(!_copy[i][j])return false;
    return true;
}

int main(void){
    fastio;
    char temp;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> temp;
            if(temp=='*')map[i][j] = true;
        }
    }
    for(int k = 0; k < (1<<M); k++){
        for(int w = 0; w < (1<<N); w++){
            int count = 0;
            for(int i = 0; i < N; i++)for(int j = 0; j < M; j++)_copy[i][j] = map[i][j];
            for(int i = 0; i < M; i++){
                if((k&(1<<i)) == (1<<i)){
                    click(0,i);
                    count++;
                }
            }
            for(int i = 0; i < N; i++){
                if((w&(1<<i)) == (1<<i)){
                    click(i,0);
                    count++;
                }
            }
            for(int i = 1; i < N; i++){
                for(int j = 1; j < M; j++){
                    if(!_copy[i-1][j-1]){
                        click(i,j);
                        count++;
                    }
                }
            }
            if(map_check()&&answer>count)answer = count;
        }
    }
    if(answer == INT_MAX)cout<<-1;
    else cout << answer;
}