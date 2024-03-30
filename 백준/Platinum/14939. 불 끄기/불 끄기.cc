#include <iostream>
#include <climits>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int answer = INT_MAX, dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
bool map[10][10], _copy[10][10];

void click(int y, int x){
    _copy[y][x] = !_copy[y][x];
    for(int d = 0; d < 4; d++){
        int ny = y + dy[d], nx = x + dx[d];
        if(ny<0||nx<0||ny>=10||nx>=10)continue;
        _copy[ny][nx] = !_copy[ny][nx];
    }
}

bool map_check(){
    for(int i = 0; i < 10; i++)for(int j = 0; j < 10; j++)if(_copy[i][j])return false;
    return true;
}

int main(void){
    fastio;
    char temp;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> temp;
            if(temp=='O')map[i][j] = true;
        }
    }
    for(int k = 0; k < (1<<10); k++){
        int count = 0;
        for(int i = 0; i < 10; i++)for(int j = 0; j < 10; j++)_copy[i][j] = map[i][j];
        for(int i = 0; i < 10; i++){
            if((k&(1<<i)) == (1<<i)){
                click(0,i);
                count++;
            }
        }
        for(int i = 1; i < 10; i++){
            for(int j = 0; j < 10; j++){
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