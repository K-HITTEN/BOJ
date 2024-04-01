#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool visited[10];
int check[10];

int main(void){
    fastio;
    int T, N, tmp1, tmp2;
    cin >> T;
    for(int t = 1; t <= T; t++){
        cin >> N;
        fill(visited,visited+10,false);
        for(int i = 0; i < N; i++){
            cin >> tmp1 >> tmp2;
            check[i] = abs(tmp1) + abs(tmp2);
        }
        int checkODD = check[0]%2;
        bool FLAG = false;
        for(int i = 1; i < N; i++){
            if(checkODD != check[i]%2){
                cout << "#" << t << " " << -1 << "\n";
                FLAG = true;
                break;
            }
        }
        if(FLAG)continue;
        int idx = 0, move_count=0, move_sum = 0;
        while(idx < N){
            for(int i = 0; i < N; i++){
                if(visited[i])continue;
                if(check[i]<=move_sum){
                    if((move_sum-check[i])%2==1)continue;
                    idx++;
                    visited[i] = true;
                }
            }
            if(idx == N)break;
            move_count++;
            move_sum += move_count;
        }
        cout << "#" << t << " " << move_count << "\n";
    }
}