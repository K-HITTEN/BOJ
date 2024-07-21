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
    sort(v.begin(),v.end());
    long long count = 0;
    for(int i = 0; i < N-1; i++){
        for(int j = i+1; j<N; j++){
            int tmp = lower_bound(v.begin()+j+1,v.end(),-(v[i]+v[j]))-v.begin();
            int tmp2 = upper_bound(v.begin()+j+1,v.end(),-(v[i]+v[j]))-v.begin();
            count += tmp2-tmp;
        }
    }
    cout << count;
}