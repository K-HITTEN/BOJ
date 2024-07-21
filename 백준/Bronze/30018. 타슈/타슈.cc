#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, count = 0;
    cin >> N;
    vector<int> a,b;
    a.resize(N);
    b.resize(N);
    for(int i = 0; i < N; i++)cin >> a[i];
    for(int i = 0; i < N; i++)cin >> b[i];
    for(int i = 0; i < N; i++){
        if(a[i]> b[i])count+=(a[i]-b[i]);
    }
    cout << count;
}