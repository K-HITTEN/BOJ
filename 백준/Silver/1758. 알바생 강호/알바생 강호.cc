#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;
int N;
long long ret;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(),v.end(),greater<int>());
    for(int i = 0; i < N; i++)ret += max(0,v[i]-i);
    cout << ret;
}