#include <iostream>
#include <climits>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
 
using namespace std;
 
int map[1001][1001];
 
int main(void){
    fastio;
    int T,N,tmp,sum,min_value;
    cin >> T;
    for(int t = 1; t <=T; t++){
        cin >> N;
        min_value=INT_MAX;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> map[i][j];
                if(map[i][j] == 0)map[i][j] = 1000;
            }
            map[i][i] = 0;
        }
        for(int k = 0; k < N; k++){
            for(int i = 0; i < N; i++){
                for(int j = 0; j <N; j++){
                    map[i][j] = min(map[i][j],map[i][k]+map[k][j]);
                }
            }
        }
        for(int i = 0; i < N; i++){
            sum = 0;
            for(int j = 0; j < N; j++){
                sum+=map[i][j];
            }
            min_value = min(min_value,sum);
        }
        cout << "#" << t << " " << min_value<<"\n";
    }
}