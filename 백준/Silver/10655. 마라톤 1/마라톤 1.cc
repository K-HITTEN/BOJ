#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, tmp1, tmp2, min_val = 987654321, result = 0;
vector<pair<int,int>> v;
int arr[100001][2];


int main(void){
    fastio;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp1 >> tmp2;
        v.push_back({tmp1,tmp2});
    }
    int result = 0;
    for(int i = 1; i < N; i++){
        arr[i][0] = abs(v[i].first-v[i-1].first) + abs(v[i].second-v[i-1].second);
        result += arr[i][0];
    }
    for(int i = 2; i < N; i++)arr[i][1] = abs(v[i].first-v[i-2].first) + abs(v[i].second-v[i-2].second);
    for(int i = 1; i < N-1; i++){
        min_val = min(min_val,result - arr[i][0] - arr[i+1][0] + arr[i+1][1]);
    }
    cout << min_val;
}