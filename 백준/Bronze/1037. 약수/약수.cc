#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v;
    
int main(void){
    fastio;
    int N;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(), v.end());
    cout <<v[0]*v[N-1];
}