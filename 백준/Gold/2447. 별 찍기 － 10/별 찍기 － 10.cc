#include<iostream>

using namespace std;

char arr[7000][7000];
int N;

void calc(int y, int x, int n){
    if(n==3){
        for(int i = y; i < y+3; i++){
            for(int j = x; j < x+3; j++){
                if(i == y+1 &&j == x+1)continue;
                arr[i][j] = '*';
            }
        }
        return;
    }
    int k = n/3;
    for(int i = y; i < y+n; i+=k){
        for(int j = x; j < x+n; j+=k){
            if(i == y+k && j == x+k)continue;
            calc(i,j,k);
        }
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    fill(&arr[0][0],&arr[6999][7000],' ');
    calc(0,0,N);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }
}