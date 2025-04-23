#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int n, tmp, sum = 0;
    cin >> n;
    while(n--){
        cin >> tmp;
        sum += tmp;
    }
    cout << sum;
}