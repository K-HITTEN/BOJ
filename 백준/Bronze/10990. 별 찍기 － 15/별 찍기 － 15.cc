#include<iostream>

using namespace std;

int N;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int n = 1; n <= N; n++){
        for(int i = n; i < N; i++)cout << ' ';
        cout << '*';
        if(n == 1){
            cout << '\n';
            continue;
        }else for(int i = 0; i < 2*(n-1)-1; i++)cout << ' ';
        cout << "*\n";
    }
}