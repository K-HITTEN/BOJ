#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<pair<int,int>> v;
vector<int> tgt;

int main(void){
    fastio;
    int N;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());
    for(int i = 0; i<N; i++){
        if(tgt.empty()||tgt.back()<v[i].second){
            tgt.push_back(v[i].second);
        }
        else if(tgt.back()>v[i].second){
            tgt[lower_bound(tgt.begin(),tgt.end(),v[i].second)-tgt.begin()] = v[i].second;
        }
    }
    cout << N-tgt.size(); 
}