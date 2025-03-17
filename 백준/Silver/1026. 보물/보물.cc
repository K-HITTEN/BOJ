#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    vector<int> A,B;
    int N, sum = 0;
    cin >> N;
    A.resize(N);
    B.resize(N);
    for(int i = 0; i < N; i++)cin >> A[i];
    for(int i = 0; i < N; i++)cin >> B[i];
    sort(A.begin(),A.end());
    sort(B.begin(),B.end(),greater<int>());
    for(int i = 0; i < N; i++)sum+=A[i]*B[i];
    cout << sum;
}