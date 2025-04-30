#include<iostream>
#include<algorithm>

using namespace std;

int N,L,W,H;

bool check(double mid){
    long long a = L/mid, b = W/mid, c = H/mid;
    long long cnt = a*b*c;
    if(cnt>=N)return true;
    else return false;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> L >> W >> H;
    double l = 0, r = min({L,W,H});
    int cnt = 0;
    while(l <= r){
        if(cnt==100)break;
        double mid = (l+r)/2;
        if(check(mid)){
            l = mid;
        }else r = mid;
        cnt++;
    }
    cout << fixed;
    cout.precision(9);
    cout << l;
}
