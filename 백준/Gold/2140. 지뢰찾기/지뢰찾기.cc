#include<iostream>
#include<cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[100][100];
int d[3] = {-1,0,1};

int main(void){
    fastio;
    int N, ret = 0;
    string s;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s;
        for(int j = 0; j < N; j++){
            if(s[j]=='#')continue;
            arr[i][j] = (int)s[j]-48;
        }
    }
    if(N<3){
        cout << 0;
        return 0;
    }
    if(N==3){
        cout << arr[0][0];
        return 0;
    }
    for(int i = 0; i < N; i++){
        int cnt = 0;
        for(int j = 0; j < 3; j++){
            int ni = i + d[j];
            if(ni<0||ni>=N)continue;
            if(arr[1][ni] == -1)cnt++;
        }
        if(cnt<arr[0][i])arr[1][i+1]=-1;
    }
    for(int i = 1; i < N-1; i++){
        int cnt = 0;
        for(int j = 0; j < 3; j++){
            int ni = i + d[j];
            if(ni<0||ni>=N)continue;
            if(arr[ni][1] == -1)cnt++;
        }
        if(cnt<arr[i][0])arr[i+1][1]=-1;
    }
    for(int i = 1; i < N-1; i++){
        int cnt = 0;
        for(int j = 0; j < 3; j++){
            int ni = i + d[j];
            if(ni<0||ni>=N)continue;
            if(arr[ni][N-2] == -1)cnt++;
        }
        if(cnt<arr[i][N-1])arr[i+1][N-2]=-1;
    }
    for(int i = 0; i < N; i++){
        int cnt = 0;
        for(int j = 0; j < 3; j++){
            int ni = i + d[j];
            if(ni<0||ni>=N)continue;
            if(arr[N-2][ni] == -1)cnt++;
        }
        if(cnt<arr[N-1][i])arr[N-2][i+1]=-1;
    }
    for(int i = 1; i < N-1; i++){
        for(int j = 1; j < N-1; j++){
            if(arr[i][j] == -1)ret++;
        }
    }
    cout << ret+pow(N-4,2);
}