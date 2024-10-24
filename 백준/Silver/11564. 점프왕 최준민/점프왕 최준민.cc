#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    long long k, a, b, ret;
    cin >> k >> a >> b;
    if(k == 1)cout<< b-a+1;
    else if(a > 0){
        ret = b/k-a/k;
        if(a%k == 0)ret++;
        cout<< ret;
    }
    else if(b < 0){
        ret = (-a)/k-(-b)/k;
        if((-b)%k == 0)ret++;
        cout << ret;
    }
    else cout << (-a)/k+b/k+1;
}