#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, M;
int answer = INT_MAX, dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1};
bool map[15][15], _copy[15][15];
char anstmp[15][15];
vector<string> v;

void click(int y, int x){
    _copy[y][x] = !_copy[y][x];
    for(int d = 0; d < 4; d++){
        int ny = y + dy[d], nx = x + dx[d];
        if(ny<0||nx<0||ny>=N||nx>=M)continue;
        _copy[ny][nx] = !_copy[ny][nx];
    }
}

bool map_check(){
    for(int i = 0; i < N; i++)for(int j = 0; j < M; j++)if(_copy[i][j])return false;
    return true;
}

int main(void){
    fastio;
    int temp;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> temp;
            if(temp==1)map[i][j] = true;
        }
    }
    for(int k = 0; k < (1<<M); k++){
        int count = 0;
        for(int i = 0; i < N; i++)for(int j = 0; j < M; j++){
            _copy[i][j] = map[i][j];
            anstmp[i][j] = '0';
        }
        for(int i = 0; i < M; i++){
            if((k&(1<<i)) == (1<<i)){
                click(0,i);
                anstmp[0][i] = '1';
                count++;
            }
        }
        for(int i = 1; i < N; i++){
            for(int j = 0; j < M; j++){
                if(_copy[i-1][j]){
                    click(i,j);
                    anstmp[i][j] = '1';
                    count++;
                }
            }
        }
        if(map_check()&&answer>=count){
            if(answer>count){
                answer = count;
                v.clear();
            }
            string s = "";
            for(int i = 0; i < N; i++)for(int j = 0; j < M; j++){
                s += anstmp[i][j];
            }
            v.push_back(s);
        }
    }
    sort(v.begin(),v.end());
    if(v.size() == 0)cout<<"IMPOSSIBLE";
    else{
        for(int i = 0; i < v[0].size(); i++){
            if(i != 0 && i % M == 0)cout << "\n";
            cout << v[0][i]<< " ";
        }
    }
}