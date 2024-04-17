#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main(void){
    int N;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(),v.end());
    int sum = v[0];
    for(int i = 1; i < N; i++){
        if(v[i-1]+1 == v[i])continue;
        sum+=v[i];
    }
    cout << sum;
}