#include <iostream>
#include <vector>
#include <map>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<string> v;
map<string,int> m;

int main(void){
    fastio;
    int T,N;
    string s1,s2;
    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> N;
        for(int i = 0; i < N; i++){
            cin >> s1 >> s2;
            if(m.find(s2) == m.end()){
                v.push_back(s2);
                m.insert({s2,2});
            }else{
                m[s2]++;
            }
        }
        int sum = 1;
        for(int i = 0; i < v.size(); i++){
            sum *= m[v[i]];
        }
        cout << sum-1 << '\n';
        v.clear();
        m.clear();
    }
}