#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M;
    string s;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> s;
        reverse(s.begin(),s.end());
        cout << s << '\n';    
    }
}