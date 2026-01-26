#include<iostream>

using namespace std;

long long sum, cnt, N, tmp;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> tmp;
        if(tmp)cnt++;
        else cnt--;
        sum += cnt;
    }
    cout << sum;
}