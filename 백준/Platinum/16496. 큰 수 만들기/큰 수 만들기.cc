#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[101][101] = {0,};

bool cmp (string a, string b){
    string ab = a+b;
    string ba = b+a;
    
    if(ab > ba) return ab > ba;
    else return ba < ab;
}

int main(void){
    fastio;
    int N;
    vector<string> s;
    cin >> N;
    s.resize(N);
    bool FLAG = false;
    for(int i = 0; i < N; i++){
        cin >> s[i];
        if(s[i] != "0")FLAG=true;
    }
    if(!FLAG){
        cout << 0;
        return 0;
    }
    sort(s.begin(),s.end(),cmp);
    for(int i = 0; i < N; i++)cout << s[i];
}