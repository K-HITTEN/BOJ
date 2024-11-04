#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T;
    cin >> T;
    string s, e;
    while(T--){
        cin >> s >> e;
        if(s==e)cout<<"OK\n";
        else cout<< "ERROR\n";
    }
}