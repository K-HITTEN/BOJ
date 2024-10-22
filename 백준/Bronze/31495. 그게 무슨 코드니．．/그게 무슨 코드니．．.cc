#include<iostream>
#include<string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    getline(cin,s);
    if(s.length()<=2||s[0]!='\"'||s[s.length()-1]!='\"')cout<<"CE";
    else for(int i = 1; i <s.length()-1; i++)cout<< s[i];
}