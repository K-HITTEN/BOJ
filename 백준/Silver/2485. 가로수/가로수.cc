#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N, cnt = 0, tmp;
vector<int> v, v2;

int gcd(int a, int b){
    if(b == 0)return a;
    return gcd(b, a%b);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(),v.end());
    for(int i = 1; i < N; i++){
        v2.push_back(v[i]-v[i-1]);
    }
    tmp = v2[0];
    for(int i = 1; i < v2.size(); i++)tmp = gcd(tmp,v2[i]);
    for(int i = 0; i < v2.size(); i++)cnt+=(v2[i]/tmp) - 1;
    cout << cnt;
}