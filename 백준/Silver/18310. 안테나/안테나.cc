#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v;

int main(void) {
    fastio;
    int N;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(),v.end());
    if(N <= 2){
        cout << v[0];
    }
    else if(N%2==0){
        int tmp1 = v[N/2], tmp2 = v[N/2-1], res1 = 0, res2 = 0;
        for(int i = 0; i < N; i++){
        }
        if(res1 <= res2)cout << tmp2;
        else cout << tmp1; 
    }else cout << v[N/2];
}