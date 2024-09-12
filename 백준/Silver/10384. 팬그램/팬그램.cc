#include<iostream>
#include<string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[26];

int main(void){
    fastio;
    int N;
    string s;
    cin >> N;
    getline(cin,s);
    for(int i = 1; i <= N; i++){
        getline(cin,s);
        fill(arr,arr+26,0);
        for(int j = 0; j < s.length(); j++){
            if(s[j]>=65&&s[j]<=90)arr[s[j]-65]++;
            else if(s[j]>=97&&s[j]<=122)arr[s[j]-97]++;
        }
        bool FLAG1 = true, FLAG2 = true, FLAG3 = true;
        for(int j = 0; j < 26; j++){
            if(arr[j]<3)FLAG3 = false;
            if(arr[j]<2)FLAG2 = false;
            if(arr[j]<1)FLAG1 = false;
        }
        cout << "Case " << i << ": ";
        if(FLAG3&&FLAG2&&FLAG1)cout << "Triple pangram!!!\n";
        else if(FLAG2&&FLAG1)cout << "Double pangram!!\n";
        else if(FLAG1)cout << "Pangram!\n";
        else cout << "Not a pangram\n";
    }
}