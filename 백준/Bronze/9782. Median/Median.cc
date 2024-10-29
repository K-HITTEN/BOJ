#include<iostream>
#include<vector>

using namespace std;

int main(void){
    cin.tie(0)->sync_with_stdio(0);
    int N, T = 1;
    vector<double> v;
    cout<<fixed;
    cout.precision(1);
    while(true){
        cin >> N;
        if(N==0)break;
        v.resize(N);
        for(int i = 0; i < N; i++)cin >> v[i];
        cout << "Case " << T << ": ";
        if(N%2) cout<< v[N/2] <<"\n";
        else cout<< (v[N/2]+v[N/2-1])/2 <<"\n";
        T++;
    }
}