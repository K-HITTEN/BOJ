#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    if(prev_permutation(v.begin(),v.end())){
        for(int i = 0; i < N; i++)cout << v[i] << " ";
    }else cout << -1;

}