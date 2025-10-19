#include<iostream>

using namespace std;

int N, arr[101];

int gcd(int a, int b){
    if(b==0)return a;
    else return gcd(b, a%b);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++)cin >> arr[i];
    for(int i = 1; i < N; i++){
        int tmp = gcd(arr[0], arr[i]);
        cout << arr[0]/tmp << "/" << arr[i]/tmp<<'\n';    
    }
}