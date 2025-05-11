#include<iostream>

using namespace std;

char arr[4] = {'N','E','S','W'};

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int idx = 0, N = 10, tmp;
    while(N--){
        cin >> tmp;
        if(tmp == 1){
            idx+=1;
        }else if(tmp == 2){
            idx+=2;
        }else if(tmp == 3){
            idx+=3;
        }
        idx%=4;
    }
    cout << arr[idx];
}