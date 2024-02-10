#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int arr[26] = {0}, oddcount = 0;
    string s;
    char odd;
    getline(cin,s);
    vector<int> v;
    for(int i = 0; i < s.length(); i++){
        arr[s[i]-65]++;
    }
    for(int i = 0; i<26; i++){
        if(arr[i]%2==1){
            oddcount++;
            arr[i]--;
            odd = (char)(i+65);
        }
    }
    if(oddcount>1) cout << "I'm Sorry Hansoo";
    else{
        for(int i = 0; i < 26;){
            if(arr[i] == 0)i++;
            else{
                v.push_back(i);
                arr[i] -= 2;
            }
        }
        sort(v.begin(),v.end());
        for(int i = 0; i < v.size(); i++){
            cout << (char)(v[i]+65);
        }
        if(oddcount >0) cout << odd;
        for(int i = v.size()-1; i>=0; i--){
            cout << (char)(v[i]+65);
        }
    }
}