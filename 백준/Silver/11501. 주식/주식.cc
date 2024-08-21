#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;


int main(void){
    fastio;
    int T, N;
    vector<int> v;
    cin >> T;
    while(T--){
        cin >> N;
        v.resize(N);
        for(int i = 0; i < N; i++)cin >> v[i];
        int maxval = 0;
        long long res = 0;
        for(int i = N-1; i >=0; i--){
            maxval = max(maxval,v[i]);
            res += maxval-v[i];
        }
        cout << res << "\n";
    }
    
}