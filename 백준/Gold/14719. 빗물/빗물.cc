#include<iostream>

using namespace std;

int H, W, tmp, cnt, chk;
bool map[501][501], FLAG;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> H >> W;
    for(int i = 0; i < W; i++){
        cin >> tmp;
        for(int j = 0; j < tmp; j++)map[j][i]=true;
    }
    for(int i = 0; i < H; i++){
        FLAG = chk = 0;
        for(int j = 0; j < W; j++){
            if(map[i][j]){
                FLAG = true;
                cnt += chk;
                chk = 0;
            }
            else if(FLAG&&!map[i][j])chk++;
        }
    }
    cout << cnt;
}