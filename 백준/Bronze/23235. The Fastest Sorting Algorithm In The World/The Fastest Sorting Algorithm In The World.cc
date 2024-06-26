#include <iostream>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string s;
    int i = 1;
    while(true){
        getline(cin,s);
        if(s == "0")break;
        cout << "Case " << i << ": Sorting... done!\n";
        i++;
    }
}