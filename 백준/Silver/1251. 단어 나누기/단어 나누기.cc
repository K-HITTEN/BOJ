#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;


int main(void){
    fastio;
    string s;
    cin >> s;
    vector<string> v;
    for(int i = 0; i < s.length(); i++){
        for(int j = i+1; j < s.length(); j++){
            string s1 = "", s2 = "", s3 ="";
            for(int k = 0; k <= i; k++)s1+=s[k];
            for(int k = i+1; k <= j; k++)s2+=s[k];
            for(int k = j+1; k < s.length(); k++)s3+= s[k];
            if(s1 == "" || s2 == "" || s3 == "")continue;
            reverse(s1.begin(),s1.end());
            reverse(s2.begin(),s2.end());
            reverse(s3.begin(),s3.end());
            v.push_back(s1+s2+s3);
        }
    }
    sort(v.begin(),v.end());
    cout << v[0];
}