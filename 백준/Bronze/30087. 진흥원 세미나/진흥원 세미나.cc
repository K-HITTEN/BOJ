#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    string s;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s;
        if(s == "Algorithm")cout << "204\n";
        else if(s == "DataAnalysis") cout << "207\n";
        else if(s == "ArtificialIntelligence") cout << "302\n";
        else if(s == "CyberSecurity") cout << "B101\n";
        else if(s == "Network") cout << "303\n";
        else if(s == "Startup") cout << "501\n";
        else cout << "105\n";
    }
}