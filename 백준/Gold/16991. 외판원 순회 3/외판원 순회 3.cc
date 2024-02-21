#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

double arr[16][16] = {0,}, dist[1<<16][16]={0,};
int N, location[16][2];

double TSP(int v, int c){
    int visit = (v|(1<<c));
    if(visit == (v|(1<<N)-1)){
        if(arr[c][0]>0) return arr[c][0];
        else return 16000001;
    }
    if(dist[visit][c] > 0)return dist[visit][c];
    dist[visit][c] = 16000001;
    for(int i = 0; i < N; i++){
        if((visit & (1<<i)) == 0 && arr[c][i]>0){
            double tmp = TSP(visit,i) + arr[c][i];
            if(dist[visit][c]>tmp)dist[visit][c] = tmp;
        }
    }
    return dist[visit][c];
}

int main(void){
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 2; j++){
            cin >> location[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if (i==j)continue;
            arr[i][j] = sqrt(pow((location[i][0]-location[j][0]),2) + pow((location[i][1]-location[j][1]),2));
        }
    }
    cout.precision(7);
    cout <<fixed << TSP(0,0);
}