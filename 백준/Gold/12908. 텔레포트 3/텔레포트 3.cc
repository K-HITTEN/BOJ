#include<iostream>
#include<vector>

using namespace std;

int xs, ys, xe, ye;
long long dist[8][8];
vector<pair<int,int>> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    fill(&dist[0][0],&dist[7][8],10e9);
    for(int i = 0; i < 8; i++)dist[i][i] = 0;
    cin >> xs >> ys >> xe >> ye;
    v.push_back({xs,ys});
    v.push_back({xe,ye});
    for(int i = 0; i < 3; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        dist[v.size()][v.size()+1] = 10;
        dist[v.size()+1][v.size()] = 10;
        v.push_back({a,b});
        v.push_back({c,d});
    }
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(i==j)continue;
            long long len = abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second);
            dist[i][j] = dist[j][i] = min(dist[i][j],len);
        }
    }
    for(int k = 0; k < 8; k++){
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }
    cout << dist[0][1];
}