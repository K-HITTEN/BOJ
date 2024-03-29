#include <iostream>
#include <string>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int cnt = 0;
string sb = "";

vector<int> getPI(string p){
    vector<int> pi(p.length(), 0);
    int j = 0;
    for(int i = 1; i < p.length(); i++){
        while(j>0 && p[j] != p[i]) j = pi[j-1];
        if(p[i] == p[j]) pi[i] = ++j;
    }
    return pi;
}

vector<int> kmp(string T, string P){
    vector<int> pi = getPI(P),answer;
    int j = 0;
    for(int i = 0; i < T.length(); i++){
        while(j>0 && P[j] != T[i]) j = pi[j-1];
        if(P[j] == T[i]){
            if(j == P.length()-1){
                answer.push_back(i-P.length()+1);
                j = pi[j];
            }else{
                j++;
            }
        }
    }
    return answer;
}

int main(void){
    fastio;
    string T,P;
    getline(cin,T);
    getline(cin,P);
    vector<int> result = kmp(T,P);
    cout << result.size() << "\n";
    for(int i = 0; i < result.size(); i++){
        cout << result[i]+1 <<" ";
    }
}