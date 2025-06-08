#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, sum = 1000, cnt = 0;
    cin >> N;
    sum -= N;
    if(sum>=500){
        cnt+=(sum/500);
        sum%=500;
    }
    if(sum>=100){
        cnt+=(sum/100);
        sum%=100;
    }
    if(sum>=50){
        cnt+=(sum/50);
        sum%=50;
    }
    if(sum>=10){
        cnt+=(sum/10);
        sum%=10;
    }
    if(sum>=5){
        cnt+=(sum/5);
        sum%=5;
    }
    cout << cnt+sum;
}