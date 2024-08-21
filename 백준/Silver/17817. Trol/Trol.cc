#include <iostream>
#include <set>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    long long N, l, r;
    cin >> N;
    for(long long i = 0; i < N; i++){
        cin >> l >> r;
        long long cl = l;
        long long ret = 0;
        while(cl>10){
            long long sum = 0;
            while(cl!=0){
                sum += (cl%10);
                cl/=10;
            }
            cl = sum;
        }
        for(; l <=r; l++){
            if(cl==10)break;
            ret += cl;
            cl++;
        }
        long long diff = r-l+1;
        ret += (diff/9)*45;
        cl = 1;
        for(long long j = 0; j < diff%9; j++){
            ret += cl;
            cl++;
        }
        cout << ret << "\n";
    }
}