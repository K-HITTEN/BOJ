#include<iostream>
#include<vector>

using namespace std;

int N, M;
long long tmp, sum = 0, cnt = 0;
vector<long long> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 0; i < M; i++)v.push_back(0);
    for(int i = 0; i < N; i++){
        cin >> tmp;
        sum += tmp;
        v[sum%M]++;
        if(!(sum%M))cnt++;
    }
    for(int i = 0; i < M; i++){
        cnt += v[i]*(v[i]-1)/2;
    }
    cout << cnt;
}