#include <iostream>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[1001][1001];

int main(void){
    fastio;
    int T,N,tmp;
    cin >> T;
    for(int t = 1; t <=T; t++){
        fill(&map[0][0],&map[1000][1001],987654321);
        cin >> N;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> tmp;
                if(tmp == 1)map[i][j] = 1;
                if(i==j)map[i][j] = 0;
            }
        }
        for(int k = 0; k < N; k++){
            for(int i = 0; i < N; i++){
                for(int j = 0; j <N; j++){
                    map[i][j] = min(map[i][j],map[i][k]+map[k][j]);
                }
            }
        }
        int min_value = 987654321;
        for(int i = 0; i < N; i++){
            int sum = 0;
            for(int j = 0; j < N; j++){
                sum+=map[i][j];
            }
            if(sum<min_value)min_value = sum;
        }
        cout << "#" << t << " " << min_value<<"\n";
    }
}