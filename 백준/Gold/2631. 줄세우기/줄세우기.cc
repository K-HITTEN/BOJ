#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N, tmp;
vector<int> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(!v.size()||v.back() < tmp)v.push_back(tmp);
        else{
            v[lower_bound(v.begin(), v.end(), tmp) - v.begin()] = tmp;
        }
    }
    cout << N-v.size();
}