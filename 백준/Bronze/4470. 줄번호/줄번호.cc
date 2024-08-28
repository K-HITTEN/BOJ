#include <iostream>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    string s;
    cin >> N;
    getline(cin,s);
    for(int i = 1; i <= N; i++){
        getline(cin,s);
        cout << i << ". " << s <<"\n";
    }
}