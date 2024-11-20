#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    while(true){
        getline(cin,s);
        if(s=="#")break;
        vector<int> v;
        int L = 2;
        if(s[1]!=' ')L = 3;
        for(int i = L+1; i < L+4; i++){
            if(s[i] == s[i-1])v.push_back(s[i]-'0');
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " " << v[i] << " glued";
            if(i < v.size()-1) cout << " and ";
            else cout << "\n";
        }
    }
}