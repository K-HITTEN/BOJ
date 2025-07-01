#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    string s1, s2;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> s1 >> s2;
        cout << "Case " << i << ": " << s2 << ", " << s1 << "\n";
    }
}