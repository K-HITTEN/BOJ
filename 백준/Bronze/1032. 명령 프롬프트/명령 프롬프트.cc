#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    string s;
    vector<char> v;
    cin >> N >> s;
    for(int i = 0; i < s.length(); i++)v.push_back(s[i]);
    for(int i = 1; i < N; i++){
        cin >> s;
        for(int j = 0; j < s.length(); j++){
            if(s[j] != v[j]){
                v[j] = '?';
            }
        }
    }
    for(int i = 0; i < v.size(); i++)cout << v[i];
}