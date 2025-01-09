#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N, map[21][21], ret = 987654321;
vector<int> v;

void check(int x, int y, int d1, int d2){
    v.resize(5);
    for(int i = 0; i < 5; i++)v[i] = 0;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            if(i < x+d1 && j <= y && !(i >= x && j >= y-(i-x))){
                v[0] += map[i][j];
            }else if(i <= x+d2 && j > y && !(i >=x && j <= y+(i-x))){
                v[1] += map[i][j];
            }else if(i >= x+d1 && j < y-d1+d2 && !(i <= x + d1 + d2 && j >= (y - d1 + d2 - (x + d1 + d2 - i)))){
                v[2] += map[i][j];
            }else if(i > x+d2 && j >= y-d1+d2 && !(i <= x + d1 + d2 && j <= (y - d1 + d2 + (x + d1 + d2 - i)))){
                v[3] += map[i][j];
            }else{
                v[4] += map[i][j];
            }
        }
    }
    sort(v.begin(),v.end());
    ret = min(ret,v[4]-v[0]);
}

void calc(){
    for(int x = 1; x <= N-2; x++){
        for(int y = 2; y <= N-1; y++){
            for(int d1 = 1; d1 <= y-1&& d1 <= N-x-1; d1++){
                for(int d2 = 1; d2 <= N - y && d2 <= N-x-d1; d2++){
                    check(x,y,d1,d2);
                }
            }
        }
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int j =1; j <= N; j++){
            cin >> map[i][j];
        }
    }
    calc();
    cout << ret;
}