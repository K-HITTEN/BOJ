#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;
    
int main(void){
    fastio;
    int N;
    string s;
    vector<string> v1,v2;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s;
        v1.push_back(s);
        v2.push_back(s);
    }
    sort(v2.begin(),v2.end());
    if(v1 == v2){
        cout << "INCREASING";
        return 0;
    }
    sort(v2.begin(),v2.end(),greater<string>());
    if(v1 == v2){
        cout << "DECREASING";
    }else{
        cout << "NEITHER";
    }
    
}