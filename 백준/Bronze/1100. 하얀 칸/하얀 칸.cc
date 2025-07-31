#include<iostream>

using namespace std;

char arr[8][8];
int cnt = 0;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> arr[i][j];
            if(i%2==j%2&&arr[i][j]=='F')cnt++;
        }
    }
    cout << cnt;
}