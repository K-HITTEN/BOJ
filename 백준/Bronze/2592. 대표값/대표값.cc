#include<iostream>

using namespace std;

int check[101], tmp, sum , idx, cnt;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 0; i < 10; i++){
        cin >> tmp;
        sum += tmp;
        check[tmp/10]++;
        if(check[tmp/10]>cnt){
            cnt = check[tmp/10];
            idx = tmp;
        }
    }
    cout << sum/10 << '\n' << idx;
}