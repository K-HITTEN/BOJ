#include<iostream>
#include<vector>

using namespace std;

int arr[1001];
vector<pair<int,int>> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int C, N, a, b;
    cin >> C >> N;
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        v.push_back({a,b});
    }
    fill(arr,arr+1001,987654321);
    arr[0] = 0;
    for(int i = 0; i < C; i++){
        for(int j = 0; j < v.size(); j++){
            if(i+v[j].second>C)arr[C] =  min(arr[C],arr[i]+v[j].first);
            else arr[i+v[j].second] = min(arr[i+v[j].second],arr[i]+v[j].first);
        }
    }
    cout << arr[C];
}