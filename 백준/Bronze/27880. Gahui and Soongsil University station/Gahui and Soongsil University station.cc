#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N = 0, tmp;
    string s;
    while( cin >> s >> tmp){
        if(s == "Es")N+=tmp*21;
        else N+=tmp*17;
    }
    cout << N;
}