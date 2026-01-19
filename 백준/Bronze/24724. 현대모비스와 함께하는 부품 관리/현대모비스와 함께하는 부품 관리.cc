#include<iostream>

using namespace std;

int T, N, A, B, u, v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    for(int i = 1; i <= T; i++){
        cin >> N >>  A >> B;
        for(int j = 0; j < N; j++)cin >> u >> v;
        cout << "Material Management " << i << "\nClassification ---- End!\n";
    }
}