#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int T, N, M, ret, a, b;
vector<int> A, B;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        cin >> N >> M;
        A.clear();
        B.clear();
        A.resize(N);
        B.resize(M);
        ret = b = 0;
        a = N - 1;
        for(int i = 0; i < N; i++)cin >> A[i];
        for(int i = 0; i < M; i++)cin >> B[i];
        sort(A.begin(), A.end(), greater<int>());
        sort(B.begin(), B.end());
        while(a >=0 && b < M){
            if(A[a]>B[b]){
                ret += a + 1;
                b++;
            }else a--;
        }
        cout << ret << '\n';
    }
}