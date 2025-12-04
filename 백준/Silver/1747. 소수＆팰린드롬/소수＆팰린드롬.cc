#include<iostream>
#include<string>
#define INF 1003002

using namespace std;

int N;
bool check[INF];

bool calc(int idx){
    string s = to_string(idx);
    int l = 0, r = s.length()-1;
    while(l<r){
        if(s[l] != s[r])return false;
        l++;
        r--;
    }
    return true;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 2; i < INF; i++){
        if(check[i])continue;
        if(i>=N){
            if(calc(i)){
                cout << i;
                return 0;
            }
        }
        for(int j = i*2; j < INF; j+=i){
            check[j] = true;
        }
    }
    cout  << endl << check[INF-1];
}