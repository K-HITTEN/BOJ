#include <iostream>
#include <vector>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp;
    vector <int> v;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    N--;
    for(int i = 0; i < v.size()-1; i++){
       for(int j = 0; j < N; j++){
           v[j] = abs(v[j]-v[j+1]);
       }
       N--;
    }
    cout << v[0];
}