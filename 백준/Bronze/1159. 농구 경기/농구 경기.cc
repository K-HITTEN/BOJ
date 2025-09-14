#include<iostream>

using namespace std;

int arr[26], N;
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> s;
        arr[s[0]-'a']++;
    }
    bool FLAG = false;
    for(int i = 0; i <= 26; i++){
        if(arr[i]>=5){
            cout << (char)('a'+i);
            FLAG = true;
        }
    }
    if(!FLAG)cout << "PREDAJA";
}