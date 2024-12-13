#include<iostream>

using namespace std;

char map[8][8];

bool check(int y, int x){
    for(int i = y+1; i < 8; i++)if(map[i][x]=='*')return true;
    for(int i = x+1; i < 8; i++)if(map[y][i]=='*')return true;
    for(int i = 1; max(y,x)+i < 8; i++)if(map[y+i][x+i]=='*')return true;
    for(int i = 1; y+i<8&&x-i>=0; i++)if(map[y+i][x-i]=='*')return true;
    return false;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> map[i][j];
            if(map[i][j]=='*')cnt++;
        }
    }
    if(cnt !=8){
        cout << "invalid";
        return 0;
    }
    for(int i = 0; i < 8; i++){
        for(int j = 0; j <8; j++){
            if(map[i][j]=='*'&&check(i,j)){
                cout << "invalid";
                return 0;
            }
        }
    }
    cout << "valid";
}