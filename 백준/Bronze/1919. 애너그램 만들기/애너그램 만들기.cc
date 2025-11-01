#include<iostream>
#include<map>

using namespace std;

map<char,int> m;
string s;
int cnt;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >>s;
    for(int i = 0; i < s.length(); i++){
        if(m.find(s[i])==m.end()){
            m.insert({s[i],1});
        }else{
            m[s[i]]++;
        }
    }
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(m.find(s[i])==m.end())cnt++;
        else{
            if(!m[s[i]])cnt++;
            else m[s[i]]--;
        }
    }
    for(auto x: m){
        if(x.second)cnt+=x.second;
    }
    cout << cnt;
}