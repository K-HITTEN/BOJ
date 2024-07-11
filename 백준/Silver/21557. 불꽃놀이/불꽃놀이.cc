#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    vector<int> v;
    int N;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    for(int i = 0; i < N-2; i++){
        if(i == N-3){
            v[0]--;
            v[N-1]--;
        }
        else if(v[0] > v[N-1])v[0]--;
        else v[N-1]--;
    }
    cout << max(v[0],v[N-1]);
}