#include<iostream>

using namespace std;

int arr[1000][1000], N, dy[4] = {-1,0,1,0}, dx[4] = {0,1,0,-1}, y, x, d, num, R, C;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> num;
    y = x = N/2;
    for(int i = 1; i <= N*N; i++){
        arr[y][x] = i;
        if(arr[y][x] == num){
            R = y;
            C = x;
        }
        y += dy[d];
        x += dx[d];
        d++;
        d %= 4;
        if(arr[y+dy[d]][x+dx[d]]){
            d--;
            if(d < 0) d = 3;
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++)cout << arr[i][j] << ' ';
        cout << '\n';
    }
    cout << R+1 << ' ' << C+1;
}