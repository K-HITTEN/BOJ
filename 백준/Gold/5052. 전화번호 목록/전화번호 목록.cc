#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

using namespace std;

struct cmp{
    bool operator()(string &a, string &b){
        return a.length()<b.length();
    }
};

set<string> s;
int t, n;
vector<string> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> t;
    while(t--){
        cin >> n;
        s.clear();
        v.clear();
        v.resize(n);
        for(int i  = 0; i < n; i++)cin >> v[i];
        sort(v.begin(),v.end(),cmp());
        bool FLAG = false;
        for(int i = 0; i < n; i++){
            string tmp = "";
            for(int j = 0; j < v[i].length(); j++){
                tmp += v[i][j];
                if(s.find(tmp)!=s.end()){
                    FLAG = true;
                    break;
                }
            }
            if(FLAG) break;
            s.insert(tmp);
        }
        if(FLAG)cout << "NO\n";
        else cout << "YES\n";
    }
}