#include<iostream>

using namespace std;

int N, arr[26];
string s, c;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> s >> c;
        if(s.length()!=c.length())cout << "Impossible\n";
        else{
            fill(arr,arr+26,0);
            bool FLAG = true;
            for(int i = 0; i < s.length(); i++)arr[s[i]-'a']++;
            for(int i = 0; i < c.length(); i++){
                arr[c[i]-'a']--;
                if(arr[c[i]-'a']<0){
                    cout << "Impossible\n";
                    FLAG = false;
                    break;
                }
            }
            if(FLAG)cout << "Possible\n";
        }
    }
}