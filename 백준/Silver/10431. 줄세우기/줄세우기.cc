#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;
    
int main(void){
    fastio;
    int P, tmp;
    vector<int> v;
    cin >> P;
    for(int t = 1; t <= P; t++){
        cin >> tmp;
        int count = 0;
        for(int i = 0; i < 20; i++){
            cin >> tmp;
            count += v.end()-upper_bound(v.begin(),v.end(),tmp);
            v.insert(upper_bound(v.begin(),v.end(),tmp),tmp);
        }
        v.clear();
        cout << t <<" "<< count <<"\n";
    }
}