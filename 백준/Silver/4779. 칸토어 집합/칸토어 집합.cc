#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N;
string s;

void calc(int l, int r){
    if(l == r)return;
    calc(l,l+(r-l+1)/3-1);
    for(int i = l+(r-l+1)/3; i <= r-(r-l+1)/3; i++)s[i] = ' ';
    calc(r-(r-l+1)/3+1,r);
}

int main(void){
    fastio;
    while(true){
        s = "";
        cin >> N;
        if(cin.eof())break;
        for(int i = 0; i < pow(3,N); i++)s+="-";
        calc(0,s.length()-1);
        cout << s << "\n";
    }
}