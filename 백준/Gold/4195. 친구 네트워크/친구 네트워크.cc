#include <iostream>
#include <map>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

map<string, string> parent;
map<string, int> num;

string find(string s){
    if(parent[s] == s)return s;
    else return parent[s] = find(parent[s]);
}

void merge(string a, string b){
    string pa = find(a), pb = find(b);
    if(pa == pb)return;
    parent[pb] = pa;
    num[pa] += num[pb];
}

int main(void){
    fastio;
    int T,F;
    string a,b;
    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> F;
        parent.clear();
        num.clear();
        for(int i = 0; i < F; i++){
            cin >> a >> b;
            if(parent.find(a) == parent.end()){
                parent.insert({a,a});
                num.insert({a,1});
            }
            if(parent.find(b) == parent.end()){
                parent.insert({b,b});
                num.insert({b,1});
            }
            merge(a,b);
            cout << num[find(a)] << "\n";
        }
    }
}