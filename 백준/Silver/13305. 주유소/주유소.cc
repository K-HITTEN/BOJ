#include<iostream>
#include<vector>

using namespace std;

vector<long long> v, arr;
long long N, oil, sum = 0;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    v.resize(N-1);
    arr.resize(N);
    for(int i = 0; i < N-1; i++)cin >> v[i];
    for(int i = 0; i < N; i++)cin >> arr[i];
    oil = arr[0];
    for(int i = 1; i < N; i++){
        sum+=oil*v[i-1];
        oil = min(oil,arr[i]);
    }
    cout << sum;
}