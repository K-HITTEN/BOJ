#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> W, K;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    W.resize(10);
    K.resize(10);
    for(int i = 0; i < 10; i++)cin >> W[i];
    for(int i = 0; i < 10; i++)cin >> K[i];
    sort(W.begin(),W.end());
    sort(K.begin(),K.end());
    cout << W[9]+W[8]+W[7] << ' ' << K[9]+K[8]+K[7];
}