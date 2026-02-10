#include<iostream>

using namespace std;

int arr[26][200001], N, l, r;
string s;
char c;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> s >> N;
    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < 26; j++)arr[j][i+1] = arr[j][i];
        arr[s[i]-'a'][i+1] = arr[s[i]-'a'][i]+1;
    }
    while(N--){
        cin >> c >> l >> r;
        cout << arr[c-'a'][r+1]-arr[c-'a'][l] << '\n';
    }
}