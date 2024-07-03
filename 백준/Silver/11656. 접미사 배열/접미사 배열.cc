#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<string> v;

int main(void){
    fastio;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        v.push_back(s.substr(i));
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
}