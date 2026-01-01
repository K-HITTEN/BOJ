#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    while(true){
        cin >> s;
        if(s == "end")break;
        if(s == "animal")cout << "Panthera tigris\n";
        else if(s == "tree")cout << "Pinus densiflora\n";
        else cout << "Forsythia koreana\n";
    }
}