#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long arr[4001][4], ret = 0;

int main(void){
    fastio;
    int N;
    cin >> N;
    vector<long long> A,B;
    for(int i = 0; i < N; i++) cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            A.push_back(arr[i][0]+arr[j][1]);
            B.push_back(arr[i][2]+arr[j][3]);
        }
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i = 0; i < A.size(); i++){
        long long tmp1 = lower_bound(B.begin(),B.end(), -A[i])-B.begin(),tmp2 = upper_bound(B.begin(),B.end(), -A[i])-B.begin();
        ret += tmp2-tmp1;
    }
    cout << ret;
}