#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v;
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    v.resize(3);
    for(int i = 0; i < 3; i++)cin >> v[i];
    sort(v.begin(),v.end());
    cin >> s;
    for(int i = 0; i < 3; i++)cout << v[s[i]-'A'] << ' ';
}