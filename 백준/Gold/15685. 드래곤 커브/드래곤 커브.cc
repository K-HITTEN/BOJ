#include<iostream>
#include<vector>

using namespace std;

int N, x, y, d, g, dx[4] = {1,0,-1,0}, dy[4] = {0,-1,0,1};
vector<int> v;
bool map[101][101];

void draw(int idx){
    for(int i = idx; i >= 0; i--){
        d = (v[i]+1)%4;
        x += dx[d];
        y += dy[d];
        map[y][x] = true;
        v.push_back(d);
    }
}

int calc(){
    int cnt = 0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(map[i][j]&&map[i+1][j]&&map[i][j+1]&&map[i+1][j+1])cnt++;
        }
    }
    return cnt;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        v.clear();
        cin >> x >> y >> d >> g;
        v.push_back(d);
        map[y][x] = true;
        x+=dx[d];
        y+=dy[d];
        map[y][x] = true;
        while(g--)draw(v.size()-1);
    }
    cout << calc();
}