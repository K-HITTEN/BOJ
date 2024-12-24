#include<iostream>

using namespace std;

int arr[2];
    
int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i+=2){
        int k;
        if(s[i]=='A')k = 0;
        else k = 1;
        if(s[i+1]=='1')arr[k]++;
        else arr[k]+=2;
    }
    if(arr[0]>arr[1])cout<<'A';
    else cout << 'B';
}