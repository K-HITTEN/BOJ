#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int T, n, m;
int A[1001], B[1001];
vector<int> a,b;
long long answer = 0;

int main(void){
    fastio;
    cin >> T >> n;
    for(int i = 0; i < n; i++)cin >> A[i];
    cin >> m;
    for(int i = 0; i < m; i++)cin >> B[i];
    for(int i = 0; i < n; i++){
        int sum = A[i];
        a.push_back(sum);
        for(int j = i+1; j < n; j++){
            sum += A[j];
            a.push_back(sum);
        }
    }
    for(int i = 0; i < m; i++){
        int sum = B[i];
        b.push_back(sum);
        for(int j = i+1; j < m; j++){
            sum += B[j];
            b.push_back(sum);
        }
    }
    sort(b.begin(), b.end());
    for(int i = 0; i < a.size(); i++){
        int tmp = T- a[i];
        answer += ((upper_bound(b.begin(),b.end(),tmp)-b.begin())-(lower_bound(b.begin(),b.end(),tmp)-b.begin()));
    }
    cout << answer;
}