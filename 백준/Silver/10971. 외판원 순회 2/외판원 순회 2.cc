#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[10][10] = {0,}, dist[1<<10][10]={0,};
int N;

int TSP(int v, int c){
    int visit = (v|(1<<c));
    if(visit == (v|(1<<N)-1)){
        if(arr[c][0]>0) return arr[c][0];
        else return 10000001;
    }
    if(dist[visit][c] > 0)return dist[visit][c];
    dist[visit][c] = 10000001;
    for(int i = 0; i < N; i++){
        if((visit & (1<<i)) == 0 && arr[c][i]>0){
            int tmp = TSP(visit,i) + arr[c][i];
            if(dist[visit][c]>tmp)dist[visit][c] = tmp;
        }
    }
    return dist[visit][c];
}

int main(void){
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }
    cout << TSP(0,0);
}