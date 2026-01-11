#include<iostream>

using namespace std;

bool FLAG;
string s;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int t = 1; t <= 5; t++){
        cin >> s;
        for(int i = 0; i+2 < s.length(); i++){
            if(s[i] == 'F'&&s[i+1]=='B'&&s[i+2]=='I'){
                FLAG = true;
                cout << t << ' ';
                break;
            }
        }
    }
    if(!FLAG)cout << "HE GOT AWAY!";
}