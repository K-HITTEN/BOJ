#include<iostream>

using namespace std;

bool check[3];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    for(int i = 0; i < 3; i++){
        cin >> s;
        if(s[0]=='l')check[0]=true;
        else if(s[0]=='k')check[1]=true;
        else if(s[0]=='p')check[2]=true;
    }
    if(check[0]&&check[1]&&check[2])cout << "GLOBAL";
    else cout << "PONIX";
}