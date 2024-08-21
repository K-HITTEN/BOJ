#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

string s;

int solve(int l, int r, bool FLAG){
    while(l<r){
        if(s[l]!=s[r]){
            if(!FLAG){
                if(solve(l+1,r,true) == 0 || solve(l,r-1,true) == 0)return 1;
            }
            return 2;
        }else{
            l++;
            r--;
        }
    }
    return 0;
}


int main(void){
    fastio;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s;
        cout << solve(0, s.length()-1, false) << "\n";
    }
}