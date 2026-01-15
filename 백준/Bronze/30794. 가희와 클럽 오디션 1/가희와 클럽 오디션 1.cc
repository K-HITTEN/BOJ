#include<iostream>

using namespace std;
    
int n;
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> n >> s;
    if(s == "miss")n*=0;
    else if(s == "bad")n*=200;
    else if(s == "cool")n*=400;
    else if(s == "great")n*=600;
    else n*=1000;
    cout << n;
}