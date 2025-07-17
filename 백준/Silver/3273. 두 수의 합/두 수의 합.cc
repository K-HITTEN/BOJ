#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N, X, cnt = 0;
vector<int> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    cin >> X;
    sort(v.begin(), v.end());
    int l = 0, r = N-1;
    while(l<r){
        if(v[l]+v[r]==X){
            cnt++;
            l++;
            r--;
        }else if(v[l]+v[r]>X)r--;
        else l++;
    }
    cout << cnt;
}