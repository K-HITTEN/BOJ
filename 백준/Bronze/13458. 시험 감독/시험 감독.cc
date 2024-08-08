#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v;

int main(void){
    fastio;
    long long N, B, C, b = 0, c = 0;
    cin >> N;
    v.resize(N);
    b = N;
    for(int i = 0; i < N; i++)cin >> v[i];
    cin >> B >> C;
    for(int i = 0; i < N; i++){
        v[i] -= B;
        if(v[i]<=0)continue;
        c += (v[i]/C);
        if(v[i]%C!=0)c++;
    }
    cout << b+c;
}