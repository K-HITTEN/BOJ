#include<iostream>

using namespace std;

bool arr[101][101];
int x, y, X, Y, cnt;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 0; i < 4; i++){
        cin >> x >> y >> X >> Y;
        for(int r = y; r < Y; r++){
            for(int c = x; c < X; c++){
                if(!arr[r][c])cnt++;
                arr[r][c] = true;
            }
        }
    }
    cout << cnt;
}