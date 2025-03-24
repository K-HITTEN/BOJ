#include<iostream>
#include<climits>

using namespace std;

long long ret = LLONG_MAX, K = 0;
long long arr[3001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int n;
    long long tmp;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> tmp;
        arr[i] = arr[i-1]+tmp;
    }
    for(int i = 1; i <= n/2; i++){
        for(int j = i; j <= n; j++){
            for(int k = j+i; k <=n; k++){
                if(ret>=abs(arr[j]-arr[j-i]-arr[k]+arr[k-i])){
                    ret = abs(arr[j]-arr[j-i]-arr[k]+arr[k-i]);
                    K = i;
                }
            }
        }
    }
    cout << K << "\n" << ret;
}