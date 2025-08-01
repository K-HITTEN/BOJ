#include<iostream>

using namespace std;

int N, M, x, y, K, tmp, temp;
int map[21][21], dice[6];


int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M >> x >> y >> K;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++)cin >> map[i][j];
    }
    int d1 = 0, d2 = 1, d3 = 2, d4 = 3, d5 = 4, d6 = 5;
    while(K--){
        cin >> tmp;
        if(tmp == 1){
            if(y+1>=M)continue;
            y++;
            temp = d1;
            d1 = d3;
            d3 = d6;
            d6 = d4;
            d4 = temp;
        }
        else if(tmp == 2){
            if(y-1<0)continue;
            y--;
            temp = d1;
            d1 = d4;
            d4 = d6;
            d6 = d3;
            d3 = temp;
        }
        else if(tmp == 3){
            if(x-1<0)continue;
            x--;
            temp = d1;
            d1 = d2;
            d2 = d6;
            d6 = d5;
            d5 = temp;
        }else {
            if(x+1>=N)continue;
            x++;
            temp = d1;
            d1 = d5;
            d5 = d6;
            d6 = d2;
            d2 = temp;
        }
        if(map[x][y]){
            dice[d6] = map[x][y];
            map[x][y] = 0;
        }else{
            map[x][y] = dice[d6];
        }
        cout << dice[d1] << "\n";
    }
}