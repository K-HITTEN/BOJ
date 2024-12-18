#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int t = 0, l = 0;
    string s;
    for(int i = 0; i < 9; i++){
        cin >> s;
        if(s == "Lion")l++;
        else t++;
    }
    if(l>4)cout << "Lion";
    else cout << "Tiger";
}