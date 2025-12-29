#include<iostream>

using namespace std;

int cost[4], l, r, arr[101], sum;


int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> cost[1] >> cost[2] >> cost[3];
    for(int k = 0; k < 3; k++){
        cin >> l >> r;
        for(int i = l; i < r; i++){
            arr[i]++;
        }
    }
    for(int i = 1; i < 101; i++){
        sum += cost[arr[i]]*arr[i];
    }
    cout << sum;
}