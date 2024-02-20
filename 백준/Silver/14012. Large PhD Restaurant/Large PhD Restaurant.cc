#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[2][100001] = {0,};
    
int main(void){
    fastio;
    long long N, M;
    cin >> N >> M;
    for(int i = 0 ; i <2; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j]; 
        }
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    for(int i = 0; i < N; i++){
        if(arr[0][i] < arr[1][i]){
            pq.push({arr[0][i],arr[1][i]});   
        }
    }
    while(!pq.empty()){
        int before = pq.top().first, after = pq.top().second;
        pq.pop();
        if(before>M)break;
        M += (after - before);
    }
    cout << M;
}