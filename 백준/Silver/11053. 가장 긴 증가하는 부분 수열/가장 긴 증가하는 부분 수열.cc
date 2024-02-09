#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp;
    vector <int> v;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(v.size() == 0|| v.back()< tmp) v.push_back(tmp);
        else if(v.back() > tmp){
            v[lower_bound(v.begin(),v.end(), tmp) -  v.begin()] = tmp;
        }
    }
    cout << v.size();
}