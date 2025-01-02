#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, d;
    string s;
    cin >> N;
    N--;
    while(N--){
        cin >> d;
        while(d--)cin >> s;
    }
    cin >> d;
    cout << d << "\n";
    while(d--){
        cin >> s;
        cout << s << '\n';
    }
    
}