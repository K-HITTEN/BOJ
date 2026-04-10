#include<iostream>

using namespace std;

char map[101][101];
int arr[101][101], H, W;
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> H >> W;
    for(int i = 0; i < H; i++){
        cin >> s;
        for(int j = 0; j < W; j++)map[i][j] = s[j];
    }
    for(int i = 0; i < H; i++){
        int k = -1;
        for(int j = 0; j < W; j++){
            if(k == -1 && map[i][j]=='.')arr[i][j] = -1;
            else if(map[i][j]=='.')arr[i][j] = ++k;
            else {
                k = arr[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++)cout << arr[i][j] << ' ';
        cout << '\n';
    }
}