#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<pair<int,string>> v;

int N, y;
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> s >> y;
        v.push_back({y,s});
    }
    sort(v.begin(),v.end(),greater<pair<int,string>>());
    cout << v[0].second;
}