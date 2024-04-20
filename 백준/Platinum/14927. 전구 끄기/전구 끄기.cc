#include <iostream>
#include <climits>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N;
int answer = INT_MAX, dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
bool map[18][18], _copy[18][18];

void click(int y, int x){
    _copy[y][x] = !_copy[y][x];
    for(int d = 0; d < 4; d++){
        int ny = y + dy[d], nx = x + dx[d];
        if(ny<0||nx<0||ny>=N||nx>=N)continue;
        _copy[ny][nx] = !_copy[ny][nx];
    }
}

bool map_check(){
    for(int i = 0; i < N; i++)for(int j = 0; j < N; j++)if(_copy[i][j])return false;
    return true;
}

int main(void){
    fastio;
    int temp;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> temp;
            if(temp==1)map[i][j] = true;
        }
    }
    for(int k = 0; k < (1<<N); k++){
        int count = 0;
        for(int i = 0; i < N; i++)for(int j = 0; j < N; j++)_copy[i][j] = map[i][j];
        for(int i = 0; i < N; i++){
            if((k&(1<<i)) == (1<<i)){
                click(0,i);
                count++;
            }
        }
        for(int i = 1; i < N; i++){
            for(int j = 0; j < N; j++){
                if(_copy[i-1][j]){
                    click(i,j);
                    count++;
                }
            }
        }
        if(map_check()&&answer>count)answer = count;
    }
    if(answer == INT_MAX)cout<<-1;
    else cout << answer;
}