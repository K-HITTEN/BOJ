#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;
    
int main(void){
    fastio;
    vector<int> v;
    int N, tmp;
    cin >> N;
    for(int i =1; i <= N; i++){
        cin>> tmp;
        v.insert(v.begin()+v.size()-tmp,i);
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}