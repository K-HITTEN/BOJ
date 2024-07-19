#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int T, N, gap;
    vector<int> v; 
    cin >> T;
    for(int t = 1; t <= T; t++){
        cin >> N;
        v.resize(N);
        gap = 0;
        for(int i = 0; i < N; i++)cin >> v[i];
        sort(v.begin(),v.end());
        cout << "Class " << t << "\n" << "Max " << v[v.size()-1] << ", Min " << v[0] << ", Largest gap ";
        for(int i = 1; i < N; i++)gap = max(gap,v[i]-v[i-1]);
        cout << gap << "\n";
    }
}