#include<iostream>
#include<vector>

using namespace std;

int gcd(int a, int b){
    if(b == 0)return a;
    return gcd(b, a%b);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int t, n;
    vector<int> v;
    cin >> t;
    while(t--){
        cin >> n;
        v.clear();
        v.resize(n);
        for(int i = 0; i < n; i++)cin >> v[i];
        long long sum = 0;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                sum += gcd(v[i],v[j]);
            }
        }
        cout << sum << '\n';
    }
}