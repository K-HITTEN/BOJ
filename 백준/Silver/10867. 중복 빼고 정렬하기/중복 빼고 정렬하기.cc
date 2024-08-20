#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp = 10001;
    vector<int> v;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(),v.end());
    for(int i = 0; i < N; i++){
        if(v[i] != tmp){
            cout << v[i] << " ";
            tmp = v[i];
        }
    }
}