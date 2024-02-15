#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    vector<pair<int,int>>v;
    cin >> N;
    v.resize(N);
    int rank[N];
    for(int i = 0; i < N; i++){
        cin >> v[i].first >> v[i].second;
    }
    for(int i = 0; i < N; i++){
        int rankCount = 1;
        for(int j = 0; j < N; j++){
            if(i == j || v[i].first>=v[j].first || v[i].second >= v[j].second) continue;
            rankCount++;
        }
        rank[i] = rankCount;
    }
    for(int i = 0; i <N; i++){
        cout << rank[i] <<" ";
    }
}