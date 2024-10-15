#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N = 0, n;
    string s, ret;
    while(true){
        if(cin.eof())break;
        cin>> s >> n;
        if(n>N){
            N = n;
            ret = s;
        }
    }
    cout<<ret;
}