#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[10], tmp;

int main(void){
    fastio;
    for(int i = 0; i < 5; i++){
        cin>>tmp;
        arr[tmp]++;
    }
    for(int i = 0; i < 10; i++){
        if(arr[i]%2==1)cout<<i;
    }
}