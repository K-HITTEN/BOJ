#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, N, K;
    string s;
    cin >> T;
    cout << fixed;
    cout.precision(2);
    while(T--){
        cin >> N;
        double sum = 0, Y;
        for(int i = 0; i < N; i++){
            cin >> s >> K >> Y;
            sum += K*Y;
        }
        cout << "$" << sum << "\n";
    }
}