#include <iostream>
#include <map>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    map<string,string> pw;
    int N,M;
    string s1,s2;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> s1 >> s2;
        pw.insert({s1,s2});
    }
    for(int i = 0; i < M; i++){
        cin >> s1;
        cout << pw.find(s1)->second << '\n';
    }
}