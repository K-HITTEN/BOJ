#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[401][401];

int main(void){
    fastio;
    int V,E,s,e,c, val = 987654321;
    cin >> V >> E;
    fill(&arr[0][0], &arr[400][401], 987654321);
    for(int i = 0; i < E; i++){
        cin >> s >> e >> c;
        arr[s][e]= c;
    }
    for(int k = 1; k <= V; k++){
        for(int i = 1; i <=V; i++){
            for(int j = 1; j <=V; j++){
                if(i==j) arr[i][j] = 0;
                arr[i][j] = min(arr[i][j], arr[i][k]+arr[k][j]);
            }
        }
    }
    for(int i = 1; i <= V; i++){
        for(int j = 1; j <= V; j++){
            if(i == j)continue;
            val = min(val,arr[i][j]+arr[j][i]);
        }
    }
    if(val == 987654321)cout << -1;
    else cout << val;
}