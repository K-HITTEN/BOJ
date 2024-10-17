#include<iostream>
#include<map>
#include<vector>
#include<string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    vector<string> v;
    map<string,int> m;
    while(true){
        getline(cin,s);
        if(s=="***")break;
        if(m.find(s)==m.end()){
            v.push_back(s);
            m.insert({s,1});
        }else m[s]++;
    }
    int max_val=0;
    bool FLAG = false;
    for(int i = 0; i < v.size(); i++){
        if(m[v[i]]>max_val){
            FLAG = false;
            max_val = m[v[i]];
            s = v[i];
        }else if(m[v[i]]==max_val)FLAG = true;
    }
    if(FLAG)cout<<"Runoff!";
    else cout << s;
}