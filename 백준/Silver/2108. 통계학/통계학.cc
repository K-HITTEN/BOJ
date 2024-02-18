#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool compare(pair<int,int> p1 , pair<int,int> p2){
    if(p1.first == p2.first) return p1.second<p2.second;
    else return p1.first>p2.first;
}

int main(void){
    fastio;
    int N;
    double sum = 0;
    cin >> N;
    vector<int> v, v2;
    vector<pair<int,int>> v3;
    v.resize(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
        v2.push_back(v[i]);
        sum += v[i];
    }
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    v2.erase(unique(v2.begin(),v2.end()),v2.end());
    if(round(sum/v.size()) == -0)cout << 0 <<"\n"<< v[N/2] << "\n";
    else cout << round(sum/v.size()) <<"\n"<< v[N/2] << "\n";
    for(int i = 0; i < v2.size(); i++){
        v3.push_back({upper_bound(v.begin(),v.end(),v2[i])-lower_bound(v.begin(),v.end(),v2[i]),v2[i]});
    }
    sort(v3.begin(),v3.end(),compare);
    if(v3.size() == 1)cout<< v3[0].second << "\n";
    else {
        if(v3[0].first == v3[1].first) cout << v3[1].second <<"\n";
        else cout << v3[0].second <<"\n";
    }
    cout << v[N-1]-v[0];
}