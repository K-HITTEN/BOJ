#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<long long> v;
int N, K;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> K;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(),v.end());
    cout << v[K-1];
}

