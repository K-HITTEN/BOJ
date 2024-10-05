#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, sum = 0, tmp1, tmp2, tmp3, ret = 0;
    cin >> N;
    while(N--){
        cin >> tmp1 >> tmp2 >> tmp3;
        if(tmp1 == tmp2 && tmp2 == tmp3){
            sum = (10000 + tmp1 * 1000);
        }
        else if(tmp1 == tmp2 || tmp1 == tmp3){
            sum = (1000 + tmp1 * 100);
        }
        else if(tmp2 == tmp3){
            sum = (1000 + tmp2 * 100);
        }
        else{
            sum = max(tmp1,max(tmp2,tmp3))*100;
        }
        ret = max(sum,ret);
    }
    cout << ret;
}