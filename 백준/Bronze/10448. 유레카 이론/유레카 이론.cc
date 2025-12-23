#include<iostream>

using namespace std;

int arr[51], T, K;

bool calc(){
    for(int i = 1; i <= 45; i++){
        for(int j = 1; j <= 45; j++){
            for(int k = 1; k <= 45; k++){
                if(arr[i]+arr[j]+arr[k] == K)return true;
            }
        }
    }
    return false;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 1; i < 51; i++){
        arr[i] = arr[i-1]+i;
    }
    cin >> T;
    while(T--){
        cin >> K;
        cout << calc() << '\n';
    }
}