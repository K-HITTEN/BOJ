#include<iostream>

using namespace std;

bool visited[26];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    char c;
    for(int i = 0; i < 25; i++){
        cin >> c;
        visited[c-'A'] = true;
    }
    for(int i = 0; i < 26; i++){
        if(!visited[i]){
            cout << (char)('A'+i);
            return 0;
        }
    }
}