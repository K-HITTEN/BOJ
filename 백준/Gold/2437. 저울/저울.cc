#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N, ret = 1;
vector<int> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(),v.end());
    for(int i = 0; i < N; i++){
        if(v[i]>ret)break;
        ret += v[i];
    }
    cout << ret;
}