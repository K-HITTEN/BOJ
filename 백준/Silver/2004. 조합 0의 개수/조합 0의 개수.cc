#include<iostream>

using namespace std;

int calc(int num, int a){
    int cnt = 0;
    while(num >= a){
        cnt += num/a;
        num/=a;
    }
    return cnt;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int n,m;
    cin >> n >> m;
    cout << min((calc(n,2)-calc(n-m,2)-calc(m,2)),(calc(n,5)-calc(n-m,5)-calc(m,5)));
}