#include<iostream>

using namespace std;

int arr[3000][3000], N, ans_1 = 0, ans_2 = 0, ans_3 = 0;

void calc(int y, int x, int Y, int X){
    bool FLAG = false;
    for(int i = y; i <= Y; i++){
        for(int j = x; j <= X; j++){
            if(arr[i][j]!=arr[y][x]){
                FLAG = true;
                break;
            }
        }
        if(FLAG)break;
    }
    if(FLAG){
        int size_y = (Y-y+1)/3;
        int size_x = (X-x+1)/3;
        calc(y, x, y+size_y-1, x+size_x-1);
        calc(y, x+size_x, y+size_y-1, x+size_x*2-1);
        calc(y, x+size_x*2, y+size_y-1, X);
        calc(y+size_y, x, y+size_y*2-1, x+size_x-1);
        calc(y+size_y, x+size_x, y+size_y*2-1, x+size_x*2-1);
        calc(y+size_y, x+size_x*2, y+size_y*2-1, X);
        calc(y+size_y*2, x, Y, x+size_x-1);
        calc(y+size_y*2, x+size_x, Y, x+size_x*2-1);
        calc(y+size_y*2, x+size_x*2, Y, X);
    }else{
        if(arr[y][x]==-1)ans_1++;
        else if(arr[y][x]==0)ans_2++;
        else ans_3++;
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> arr[i][j];
        }
    }
    calc(1,1,N,N);
    cout << ans_1 << '\n' << ans_2 << '\n' << ans_3;
}