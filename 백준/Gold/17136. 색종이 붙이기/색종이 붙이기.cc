#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[10][10];
int answer = 26;

void dfs(int y, int x, int count, int one, int two, int three, int four, int five){
    if(y==10){
        answer = min(answer,count);
    }
    if(answer <= count)return;
    bool zero = false;
    if(map[y][x] == 1){
        if(five>0&&y<=5&&x<=5){
            for(int i = y; i < y+5; i++){
                for(int j = x; j < x+5; j++){
                    if(map[i][j] == 0){
                        zero = true;
                        break;
                    }
                }
            }
            if(!zero){
                for(int i = y; i < y+5; i++){
                    for(int j = x; j < x+5; j++){
                        map[i][j] = 0;
                    }
                }
                if(x+5>9)dfs(y+1,0,count+1,one,two,three,four,five-1);
                else dfs(y,x+5,count+1,one,two,three,four,five-1);
                for(int i = y; i < y+5; i++){
                    for(int j = x; j < x+5; j++){
                        map[i][j] = 1;
                    }
                }
            }
        }
        if(four>0&&y<=6&&x<=6){
            zero = false;
            for(int i = y; i < y+4; i++){
                for(int j = x; j < x+4; j++){
                    if(map[i][j] == 0){
                        zero = true;
                        break;
                    }
                }
            }
            if(!zero){
                for(int i = y; i < y+4; i++){
                    for(int j = x; j < x+4; j++){
                        map[i][j] = 0;
                    }
                }
                if(x+4>9)dfs(y+1,0,count+1,one,two,three,four-1,five);
                else dfs(y,x+4,count+1,one,two,three,four-1,five);
                for(int i = y; i < y+4; i++){
                    for(int j = x; j < x+4; j++){
                        map[i][j] = 1;
                    }
                }
            }
        }
        if(three>0&&y<=7&&x<=7){
            zero = false;
            for(int i = y; i < y+3; i++){
                for(int j = x; j < x+3; j++){
                    if(map[i][j] == 0){
                        zero = true;
                        break;
                    }
                }
            }
            if(!zero){
                for(int i = y; i < y+3; i++){
                    for(int j = x; j < x+3; j++){
                        map[i][j] = 0;
                    }
                }
                if(x+3>9)dfs(y+1,0,count+1,one,two,three-1,four,five);
                else dfs(y,x+3,count+1,one,two,three-1,four,five);
                for(int i = y; i < y+3; i++){
                    for(int j = x; j < x+3; j++){
                        map[i][j] = 1;
                    }
                }
            }
        }
        if(two>0&&y<=8&&x<=8){
            zero = false;
            for(int i = y; i < y+2; i++){
                for(int j = x; j < x+2; j++){
                    if(map[i][j] == 0){
                        zero = true;
                        break;
                    }
                }
            }
            if(!zero){
                for(int i = y; i < y+2; i++){
                    for(int j = x; j < x+2; j++){
                        map[i][j] = 0;
                    }
                }
                if(x+2>9)dfs(y+1,0,count+1,one,two-1,three,four,five);
                else dfs(y,x+2,count+1,one,two-1,three,four,five);
                for(int i = y; i < y+2; i++){
                    for(int j = x; j < x+2; j++){
                        map[i][j] = 1;
                    }
                }
            }
        }
        if(one>0){
            map[y][x] = 0;
            if(x==9)dfs(y+1,0,count+1,one-1,two,three,four,five);
            else dfs(y,x+1,count+1,one-1,two,three,four,five);
            map[y][x] = 1;
        }
    }else{
        if(x == 9)dfs(y+1,0,count,one,two,three,four,five);
        else dfs(y,x+1,count,one,two,three,four,five);
    }
}

int main(void){
    fastio;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> map[i][j];
        }
    }
    dfs(0,0,0,5,5,5,5,5);
    if(answer == 26)cout << -1;
    else cout << answer;
}