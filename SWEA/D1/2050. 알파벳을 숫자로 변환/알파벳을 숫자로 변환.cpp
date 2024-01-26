#include <iostream>

using namespace std;

int main(void){
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    getline(cin,s);
    for(int i = 0; i<s.length(); i++){
    	cout << (int)s[i] - 64 << " ";
    }
}