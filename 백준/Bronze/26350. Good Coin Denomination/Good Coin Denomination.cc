#include<iostream>
#include<vector>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, N;
    vector<int> v;
    cin >> T;
    while(T--){
        cin >> N;
        v.resize(N);
        cout << "Denominations: ";
        for(int i = 0; i < N; i++){
            cin >> v[i];
            cout << v[i] << " ";
        }
        cout << "\n";
        bool FLAG = false;
        for(int i = 1; i < N; i++){
            if(v[i]<v[i-1]*2)FLAG = true;
        }
        if(FLAG)cout << "Bad coin denominations!\n\n";
        else cout << "Good coin denominations!\n\n";
    }
}