#include<iostream>

using namespace std;

int N, M, x, y, K, tmp, d1 = 0, d2 = 1, d3 = 2, d4 = 3, d5 = 4, d6 = 5, map[21][21], dice[6];

void roll(int &a, int &b, int &c, int &d){
    int temp = a;
    a = b;
    b = c;
    c = d;
    d = temp;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M >> x >> y >> K;
    for(int i = 0; i < N; i++)for(int j = 0; j < M; j++)cin >> map[i][j];
    while(K--){
        cin >> tmp;
        if(tmp == 1){
            if(y+1>=M)continue;
            y++;
            roll(d1, d3, d6, d4);
        }
        else if(tmp == 2){
            if(y-1<0)continue;
            y--;
            roll(d1, d4, d6, d3);
        }
        else if(tmp == 3){
            if(x-1<0)continue;
            x--;
            roll(d1, d2, d6, d5);
        }else {
            if(x+1>=N)continue;
            x++;
            roll(d1, d5, d6, d2);
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