#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<pair<int,int>> v;
int arr[200000];

bool cmp (pair<int,int> &a, pair<int,int> &b){
    return a.second < b.second;
}

int main(void){
    fastio;
    int N,tmp;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++){
        cin >> tmp;
        v[i] = {tmp,i};
    }
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    sort(v.begin(),v.end());
    sort(arr,arr+N);
    for(int i = 0; i < N; i++){
        if(v[i].first<=arr[i]){
            v[i].first = arr[i];
        }else{
            cout << -1;
            return 0;
        }
    }
    sort(v.begin(),v.end(),cmp);
    for(int i = 0; i < N; i++){
        cout << v[i].first << " ";
    }
    
}