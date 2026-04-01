#include<iostream>

using namespace std;

string s;
int N, cnt = 1, tmp;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> s;
    for(int i = 0; i < N; i++){
        if(s[i]=='S')cnt++;
        else {
            tmp++;
            if(tmp == 2){
                tmp = 0;
                cnt++;
            }
        }
    }
    if(cnt > N)cout << N;
    else cout << cnt;
}