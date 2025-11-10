#include<iostream>

using namespace std;

string s;
int N;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++)s+="* ";
    for(int i = 0; i < N; i++){
        if(i%2)cout << ' ';
        cout << s << '\n';
    }
}