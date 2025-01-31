#include<iostream>

using namespace std;

struct info{
    int s, x, y;
};

info v[1001];
int N, T, M, A, B, arr[1001][1001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> T;
    for(int i = 0; i < N; i++){
        cin >> v[i].s >> v[i].x >> v[i].y;
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i == j)continue;
            arr[i][j] = abs(v[i].x-v[j].x)+abs(v[i].y-v[j].y);
            if(v[i].s&&v[j].s)arr[i][j] = min(arr[i][j], T);
        }
    }
    for(int k = 0; k < N; k++){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                arr[i][j] = min(arr[i][j], arr[i][k]+arr[k][j]);
            }
        }
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> A >> B;
        cout << arr[A-1][B-1] << '\n';
    }
}