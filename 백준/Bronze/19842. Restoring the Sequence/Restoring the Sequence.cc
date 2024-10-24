#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[1001];

int main(void){
    fastio;
    int n, m, ret = 0;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)cin >> arr[i];
    if(n!=m+1)cout<<"No";
    else{
        bool FLAG = false;
        for(int i = 1; i <= m; i++){
            if(!FLAG){
                if(arr[i] == i)continue;
                if(arr[i] == i+1){
                    FLAG = true;
                    ret = i;
                }
                else{
                    cout<< "No";
                    return 0;
                }
            }else{
                if(arr[i] == i+1)continue;
                else {
                    cout << "No";
                    return 0;
                }
            }
        }
        if(ret == 0)ret = n;
        cout << "Yes\n" << ret;
    }
}