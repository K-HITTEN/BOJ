#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> v;
int N, ret = 0;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(),v.end(),greater<int>());
    for(int i = 0; i < N; i++)ret = max(ret, v[i]*(i+1));
    cout << ret;
}