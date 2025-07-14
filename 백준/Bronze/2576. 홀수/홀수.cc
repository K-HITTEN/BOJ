#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int tmp, sum = 0, ret = 100;
    for(int i = 0; i < 7; i++){
        cin >> tmp;
        if(tmp%2){
            sum+=tmp;
            ret = min(ret,tmp);
        }
    }
    if(!sum)cout << -1;
    else cout << sum << "\n" << ret;
}