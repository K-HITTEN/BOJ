#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[11] = {0,}, people[11] = {0,}, N;
int min_value = INT_MAX;
vector<pair<int,int>> v;
vector<int> sector;
bool node[11] = {false,};

int find(int idx){
    if(arr[idx] == idx) return idx;
    else return arr[idx] = find(arr[idx]);
}

void unions(int x, int y){
    int px = find(x), py = find(y);
    if(py>px)arr[py] = px;
    else arr[px] = py;
}

void search(int nodeIdx){
    if(nodeIdx == N){
        for(int i = 0; i < N; i++)arr[i] = i;
        for(int i = 0; i < v.size(); i++){
            if((node[v[i].first]&&node[v[i].second])||(!node[v[i].first]&&!node[v[i].second])){
                unions(v[i].first,v[i].second);
            }
        }
        sector.clear();
        for(int i = 1; i<=N; i++){
            sector.push_back(find(i));
        }
        sort(sector.begin(),sector.end());
        sector.erase(unique(sector.begin(),sector.end()),sector.end());
        if(sector.size()==2){
            int sum1 = 0, sum2 = 0;
            for(int i =1; i <= N; i++){
                if(arr[i] == sector[0]) sum1+= people[i];
                else sum2 += people[i];
            }
            if(min_value>abs(sum1-sum2))min_value = abs(sum1-sum2);
        }
        return;
    }
    node[nodeIdx] = true;
    search(nodeIdx+1);
    node[nodeIdx] = false;
    search(nodeIdx+1);
}


int main(void){
    fastio;
    int tmp, tmp2;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> people[i];
    }
    for(int i = 1; i <= N; i++){
        cin >> tmp;
        for(int j = 0; j <tmp; j++){
            cin >> tmp2;
            if(i<tmp2){
                v.push_back({i,tmp2});
            }
        }
    }
    search(0);
    if(min_value == INT_MAX)cout << -1;
    else cout << min_value;
}