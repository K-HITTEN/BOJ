#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int n;
    double sum;
    cin >> n;
    if(n == 0){
        cout << 0;
        return 0;
    }
    vector<int> v;
    v.resize(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    int k = round(n*0.15);
    for(int i = k; i <n-k; i++){
        sum += v[i];
    }
    cout << round(sum/(n-2*k));
}