#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}

int main(){
    fastio;
    vector<pair<int,int>> v;
    int tmp, sum = 0;
    for(int i = 1; i <= 8; i++){
        cin >> tmp;
        v.push_back({tmp, i});
    }
    sort(v.begin(), v.end(), greater<pair<int,int>>());
    sort(v.begin(), v.begin()+5, cmp);
    for(int i = 0; i  < 5; i++)sum += v[i].first;
    cout << sum << "\n";
    for(int i = 0; i < 5; i++){
        cout << v[i].second << " ";
    }
}