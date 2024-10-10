#include<iostream>
#include<vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    vector<string> v;
    string s, tmp;
    int N;
    cin >> s >> N;
    while(N--){
        cin >> tmp;
        bool FLAG = false;
        for(int i = 0; i < 9; i++){
            if(s[i] == '*')continue;
            if(s[i] != tmp[i]){
                FLAG = true;
                break;
            }
        }
        if(!FLAG)v.push_back(tmp);
    }
    cout << v.size() << "\n";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
}