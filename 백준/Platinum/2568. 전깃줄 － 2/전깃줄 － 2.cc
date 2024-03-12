#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<pair<int,int>> v, num;
vector<int> tgt, result;

int main(void){
    fastio;
    int N;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end());
    int n = 1;
    for(int i = 0; i<N; i++){
        if(tgt.empty()||tgt.back()<v[i].second){
            tgt.push_back(v[i].second);
            num.push_back({n, v[i].first});
            n++;
        }
        else if(tgt.back()>= v[i].second){
            num.push_back({lower_bound(tgt.begin(),tgt.end(),v[i].second)-tgt.begin()+1,v[i].first});
            tgt[lower_bound(tgt.begin(),tgt.end(),v[i].second)-tgt.begin()] = v[i].second;
        }
    }
    cout << N-tgt.size() << "\n";
    n = tgt.size();
    for(int i = num.size()-1; i>=0; i--){
        if(num[i].first == n){
            n--;
        }else{
            result.push_back(num[i].second);
        }
    }
    sort(result.begin(),result.end());
    for(int i = 0; i < result.size(); i++)cout << result[i] << "\n";
    
}