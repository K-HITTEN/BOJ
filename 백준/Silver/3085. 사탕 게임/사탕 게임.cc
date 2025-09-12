#include<iostream>

using namespace std;

int N, ret = 0;
char map[51][51], ch[4] = {'C','P','Z','Y'};

void check(){
    for(int i = 0; i < N; i++){
        int cnt = 1;
        for(int j = 0; j < N-1; j++){
            if(map[i][j] == map[i][j+1])cnt++;
            else {
                ret = max(ret,cnt);
                cnt = 1;
            }
        }
        ret = max(ret, cnt);
    }
    for(int j = 0; j < N; j++){
        int cnt = 1;
        for(int i = 0; i < N-1; i++){
            if(map[i][j] == map[i+1][j])cnt++;
            else {
                ret = max(ret, cnt);
                cnt = 1;
            }
        }
        ret = max(ret, cnt);
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> map[i][j];
        }
    }
    swap(map[0][0],map[0][1]);
    check();
    swap(map[0][0],map[0][1]);
    swap(map[0][0],map[1][0]);
    check();
    swap(map[0][0],map[1][0]);
    for(int i = 1; i < N; i++){
        for(int j = 1; j < N; j++){
            swap(map[i][j],map[i-1][j]);
            check();
            swap(map[i][j],map[i-1][j]);
            swap(map[i][j],map[i][j-1]);
            check();
            swap(map[i][j],map[i][j-1]);
        }
    }
    cout << ret;
}