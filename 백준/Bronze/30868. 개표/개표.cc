#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        for(int i = 0; i < n/5; i++)cout << "++++ ";
        for(int i = 0; i < n%5; i++)cout << "|";
        cout << "\n";
    }
}