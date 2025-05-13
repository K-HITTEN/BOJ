#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<long long> v;
int arr[1001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, tmp;
    cin >> N;
    for(int i = 0; i < N; i++)cin >> arr[i];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            v.push_back(arr[i]+arr[j]);
        }
    }
    sort(arr,arr+N);
    sort(v.begin(),v.end());
    for(int i = N-1; i >= 0; i--){
        for(int j = i; j >=0; j--){
            tmp = arr[i]-arr[j];
            int l = 0, r = v.size()-1;
            while(l<=r){
                int mid = (l+r)/2;
                if(v[mid]>tmp)r = mid-1;
                else if(v[mid]<tmp)l = mid+1;
                else {
                    cout << arr[i];
                    return 0;
                }
            }
        }
    }
}