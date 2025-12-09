#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v, arr;
int N, K, ret;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> K;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(), v.end());
    for(int i = 1; i < N; i++)arr.push_back(v[i]-v[i-1]);
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i = K-1; i < arr.size(); i++)ret += arr[i];
    cout << ret;
}